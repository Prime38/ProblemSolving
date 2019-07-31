#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  n;
    unsigned long long  ans=0,f=1,total=0;
    cin>>n;
    vector<long long > v(n);
    for(long long  i=0;i<n;i++){
        cin>>v[i];
        ans+=v[i];
    }

    sort(v.begin(),v.end());
    //for(int i=0;i<n;i++)cout<<v[i]<<endl;
    long long temp=v[0];
    for(long long i=1;i<n;i++){
        total+=(i*v[i]-temp);
        temp+=v[i];
    }
    total*=2;
    ans+=total;
    f*=n;
    long long g=__gcd(f,ans);
    cout<<ans/g<<" "<<f/g<<" "<<endl;
    return 0;
}