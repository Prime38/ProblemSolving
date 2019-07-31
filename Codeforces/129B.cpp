#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ans=0,i,j;
    cin>>n>>m;
    vector<int>g[n+5];
    while(m--){
        int n1,n2;
        cin>>n1>>n2;
        g[n1].push_back(n2);
        g[n2].push_back(n1);
    }
    bool flag=true;
    while(flag==true){
        flag=false;
        vector<int>v;
        for( i=1;i<=n;i++){
            if(g[i].size()==1){
              flag=true;
              v.push_back(i);
             }
        }
        if(flag==true){
            ans++;
            for(int k=0;k<v.size();k++){
                int x=v[k];
                g[x].clear();
                for( i=1;i<=n;i++)
                    for( j=0; j<g[i].size(); j++){
                        if(g[i][j]==x)g[i].erase(g[i].begin()+j);
                    }
            }
        }
        v.clear();
    }
    cout<<ans<<endl;
}