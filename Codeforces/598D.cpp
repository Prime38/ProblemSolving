#include<bits/stdc++.h>
using namespace std;
vector<string> v;
int mark[1010][1010],ans[1000010],p=0;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
void dfs(int n,int m,int x,int y)
{
    if(mark[x][y]!=-1){return ;}
    mark[x][y]=p;
    for(int i=0;i<4;i++){
        int X=x+dx[i],Y=y+dy[i];
        if(X>=0&&Y>=0&&X<n&&Y<m&&v[X][Y]=='.')dfs(n,m,X,Y);
        else if(X>=0&&Y>=0&&X<n&&Y<m&&v[X][Y]=='*')ans[p]++;
    }
}
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    memset(ans,0,sizeof ans);
    memset(mark,-1,sizeof mark);
    while(k--){
        int n1,n2;
        cin>>n1>>n2;
        if(v[n1-1][n2-1]=='.'){
            if(mark[n1-1][n2-1]!=-1)cout<<ans[mark[n1-1][n2-1]]<<endl;
            else{
                p++;
                dfs(n,m,(n1-1),(n2-1));
                cout<<ans[mark[n1-1][n2-1]]<<endl;
            }
        }

    }
    return 0;
}