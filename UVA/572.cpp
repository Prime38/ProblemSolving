#include<bits/stdc++.h>
using namespace std;
int vis[100][100];
int m,n,ans;
string s;
vector<string > v;
int di[]={1,1,1,-1,-1,-1,0,0};
int dj[]={1,0,-1,1,0,-1,1,-1};
void dfs(int a,int b)
{
    vis[a][b]=1;
    int I,J;
    for(int i=0;i<8;i++){
        I=a+di[i];
        J=b+dj[i];
        if(I>=0&&I<m&&J>=0&&J<n&&!vis[I][J]){
            vis[I][J]=1;
            if(v[I][J]=='@')dfs(I,J);
        }
    }
}
int main()
{
    while(cin>>m>>n){
        if(m==0)break;
        v.clear();
        for(int i=0;i<m;i++){
            cin>>s;
            v.push_back(s);
        }
        ans=0;
        memset(vis,0,sizeof(vis));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!vis[i][j]){
                    vis[i][j]=1;
                    if(v[i][j]=='@'){
                        ans++;
                        dfs(i,j);
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}