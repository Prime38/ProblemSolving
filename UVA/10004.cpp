#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        if(n==0) break;
        int e,i,j,k,sz1,sz2,flag=0;
        short int a[n+5][n+5];
        memset(a,0,sizeof(a));
        cin>>e;
        while(e--){
            int n1,n2;
            cin>>n1>>n2;
            a[n1][n2]=1;
            a[n2][n1]=1;
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(a[i][j]==1){
                    for(k=0;k<n;k++){
                        if(a[j][k]==1&&a[i][k]==1) {flag=1;break;}
                    }
                    if(flag==1) break;
                }
            }
            if(flag==1) break;
        }
        if(flag==1)cout<<"NOT BICOLORABLE."<<endl;
        else cout<<"BICOLORABLE."<<endl;
    }
    return 0;
}
