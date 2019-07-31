#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,i,ans;
    cin>>n>>s;
    ans=s;
    for(i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        ans=max(ans,a+b);
    }
    cout<<ans<<endl;
    return 0;
}