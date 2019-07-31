#include<bits/stdc++.h>
using namespace std;
#define BOUNDARY(i,j) ((i>=0&&i<r)&&(j>=0&&j<c))
char v[25][25];
bool vis[25][25];
int r,c,cnt;
int dx[]={0,1,0,-1};
int dy[]={-1,0,1,0};
void dfs(int x,int y)
{
    for(int i=0;i<4;i++){
        if(BOUNDARY(x+dx[i],y+dy[i])&&v[x+dx[i]][y+dy[i]]=='.'&&!vis[x+dx[i]][y+dy[i]]){
            vis[x+dx[i]][y+dy[i]]=true;
            cnt++;
            dfs(x+dx[i],y+dy[i]);
        }
    }
}
int main()
{
    int t,tc,x,y;
    cin>>tc;
    for(t=1;t<=tc;t++){
        scanf("%d %d",&c,&r);
        memset(vis,0,sizeof vis);
        getchar();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                v[i][j]=getchar();
                if(v[i][j]=='@'){
                    x=i;
                    y=j;
                    vis[x][y]=true;
                }
            }
            getchar();
        }

        cnt=1;
        dfs(x,y);
        printf("Case %d: %d\n",t,cnt);
    }
    return 0;
}