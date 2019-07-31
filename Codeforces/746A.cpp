#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,ans;
    cin>>a>>b>>c;
    b=b/2;
    c=c/4;
    int ar[]={a,b,c};
    sort(ar,ar+3);
    ans=ar[0];
    ans*=7;
    cout<<ans<<endl;
    return 0;
}