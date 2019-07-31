#include<bits/stdc++.h>
using namespace std;
int vis[30];
vector<int> g[30];
void dfs(int st)
{
    vis[st]=1;
    for(int i=0; i<g[st].size(); i++)
    {
        int v=g[st][i];
        if(!vis[v])dfs(v);
    }
    return ;
}
int main()
{
    int t;
    char node[3];
    cin>>t;
    scanf("\n");
    while(t--){
        gets(node);
        int cnt=0,n=node[0]-'A',i;
        memset(vis,0,sizeof vis);
        for(i=0;i<=n;i++){g[i].clear();}
        char edge[3];
        while(gets(edge)&&edge[0]){
            int n1=edge[0]-'A';
            int n2=edge[1]-'A';
            g[n1].push_back(n2);
            g[n2].push_back(n1);
        }
        for(int i=0; i<=n; i++){
            if(!vis[i]){
                dfs(i);
                cnt++;
            }
        }
        cout<<cnt<<endl;
        if(t)cout<<endl;

    }
    return 0;
}