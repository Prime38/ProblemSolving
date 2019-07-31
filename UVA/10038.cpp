#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,a[3010],sum[3010],i,j,temp;
    while((scanf("%d",&n))==1){
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        temp=1;
        for(i=0,j=0;i<n-1;j++,i++){
            sum[j]=a[i]-a[i+1];
            if(sum[j]<0) sum[j]=-sum[j];
        }
        sort(sum,sum+j);
        for(j=0;j<n-1;j++){
            if(sum[j]!=j+1) {temp=0; break;}
        }
        if(temp==1) cout<<"Jolly"<<endl;
        else cout<<"Not jolly"<<endl;
    }
    return 0;
}