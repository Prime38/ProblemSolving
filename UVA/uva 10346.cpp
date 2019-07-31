#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,k,ans,r;
    while(cin>>n>>k){
        ans=n;
        r=n;
        while(r>=k){
            ans+=r/k;
            r=r%k+r/k;
        }
        cout<<ans<<endl;
    }
    return 0;
}
