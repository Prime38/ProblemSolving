#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    bool vis[n+2]={false};

    for(i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        vis[a]=true;
        vis[b]=true;

    }
    cout<<n-1<<endl;
    int flag=1;
    while(vis[flag]){
        flag++;
    }
    for(i=1;i<=n;i++){
        if(i!=flag)cout<<i<<" "<<flag<<endl;
    }
    return 0;
}