#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,p=0;
    cin>>n>>m;
    while(n!=0&m!=0){
        if(n==0&&m==0) break;
         p++;
        char a[n+5][m+5];
        int cnt[n+5][m+5],temp[n+5][m+5];
        memset(temp,0,sizeof(temp));
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                cin>>a[i][j];
                if(a[i][j]=='*')temp[i][j]=1;
                else temp[i][j]=0;
            }
        }
        cout<<"Field #"<<p<<":"<<"\n";
       memset(cnt,0,sizeof(cnt));
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                if(temp[i][j]==1)cout<<a[i][j];
                else {
                    cnt[i][j]+=temp[i][j+1]+temp[i][j-1]+temp[i+1][j]+temp[i+1][j+1]+temp[i+1][j-1]+temp[i-1][j]+temp[i-1][j+1]+temp[i-1][j-1];
                    cout<<cnt[i][j];
                }
            }
            cout<<"\n";
        }
        cin>>n>>m;
        if(n!=0&m!=0)cout<<endl;
    }
    return 0;
}
