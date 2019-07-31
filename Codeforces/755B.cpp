
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    string p[n+5];
    string e[m+5];
    set<string> pol;
    for(i=0;i<n;i++){
        cin>>p[i];
        pol.insert(p[i]);
    }
    for(i=0;i<m;i++){
        cin>>e[i];
        pol.insert(e[i]);
    }
    if(n>m){cout<<"YES"<<endl; return 0;}
    else if(m>n){cout<<"NO"<<endl; return 0;}
    else{
        if(pol.size()%2==1){cout<<"YES"<<endl; return 0;}
        else{cout<<"NO"<<endl; return 0;}
    }
}