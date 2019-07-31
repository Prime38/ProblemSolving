#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,cnt=0;
    cin>>n;
    string s;
    int vis[110][110];
    memset(vis,-1,sizeof(vis));
    for(i=0;i<n;i++){
        cin>>s;
        for(j=0;j<n;j++){
            if(s[j]=='#'){vis[i][j]=0;cnt++;}

        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(vis[i][j]==0){
                if(vis[i+1][j]==0&&vis[i-1][j]==0&&vis[i][j+1]==0&&vis[i][j-1]==0){
                    vis[i+1][j]=1;
                    vis[i-1][j]=1;
                    vis[i][j+1]=1;
                    vis[i][j-1]=1;
                    vis[i][j]=1;
                    cnt-=5;
                }
            }
        }
    }
    if(cnt==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}