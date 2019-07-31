
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int n;
    bool flag;
    while(scanf("%d%*c",&n)==1&&n){
        int a[n+5],i,j,k,m[n+5];
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            m[a[i]]=i;
        }
        flag=false;
        for(i=0;i<n-2&&(!flag);i++){
            for(j=i+1;j<n-1&&(!flag);j++){
                int dif=a[j]-a[i];
                if((a[j]+dif)<n&&(a[j]+dif)>=0&&m[a[j]+dif]>j){
                    flag=true;
                    break;
                }
            }
        }
        if(flag)cout<<"no"<<endl;
        else cout<<"yes"<<endl;
    }
    return 0;
}