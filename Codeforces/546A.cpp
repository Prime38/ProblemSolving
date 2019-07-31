#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,k,w;
    cin>>k>>n>>w;
    long ans=(k*w*(w+1)/2)-n;
    if(ans>0)
    cout<<ans<<endl;
    else cout<<0<<endl;
    return 0;
}