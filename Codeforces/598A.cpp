#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long ans=(n*(n+1)/2)-2;
        for(int i=2;i<=n;i*=2){
            ans-=(2*i);
        }
        cout<<ans<<endl;
    }
    return 0;
}