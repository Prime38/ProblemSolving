#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,a=0,i,j;
    cin>>n>>m>>k;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            a+=2;
            if(a==k||a-1==k){
                if(k%2==0)cout<<i<< " "<<j<<" "<<"R"<<endl;
                else cout<<i<< " "<<j<<" "<<"L"<<endl;
                break;
            }
        }
    }return 0;
}