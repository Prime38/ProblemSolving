#include<bits/stdc++.h>
using namespace std;
int p=0;
int ans[101000];
char ch[510][510];
int mark[510][510];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
void dfs(int x,int y,int m,int n)
{
    if(ch[x][y]=='#')return ;
    mark[x][y]=p;
    if(ch[x][y]=='C')ans[p]++;
    ch[x][y]='#';
    for(int i=0;i<4;i++){
        int X=x+dx[i];
        int Y=y+dy[i];
        if(X>=0&&Y>=0&&X<m&&Y<n&&ch[X][Y]!='#')dfs(X,Y,m,n);
    }
}
int main()
{
    int t,m,n,q;
    scanf("%d",&t);
    for(int cas=1;cas<=t;cas++){
        scanf("%d%d%d",&m,&n,&q);
        memset(ans,0,sizeof (ans));
        memset(mark,-1,sizeof(mark));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>ch[i][j];
            }
        }
        printf("Case %d:\n",cas);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(ch[i][j]!='#'){
                    dfs(i,j,m,n);
                    p++;
                }
            }
        }
        while(q--){
            int n1,n2;
            scanf("%d %d",&n1,&n2);
            cout<<ans[mark[n1-1][n2-1]]<<endl;
        }
    }
    return 0;
}