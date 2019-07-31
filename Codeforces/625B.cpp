#include<bits/stdc++.h>
using namespace std;
int main()
{
    string g,p;
    cin>>g>>p;
    int gs=g.size(),ps=p.size(),i,j,flag=0,n=0;
    for(i=0;i<gs-ps+1;i++){
        flag=0;
        if(g[i]==p[0]){
            for(j=0;j<ps;j++){
                if(p[j]!=g[i+j]){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                n++;
                i+=ps-1;
            }
        }
    }
    cout<<n<<endl;
    return 0;
}