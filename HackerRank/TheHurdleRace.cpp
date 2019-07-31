#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,m=0;
    cin>>n>>k;
    int h[n+5];
    for(i=0;i<n;i++){
        cin>>h[i];
        m=max(m,h[i]);
    }
    if(m-k>0)
    cout<<m-k<<endl;
    else cout<<0<<endl;
    return 0;
}