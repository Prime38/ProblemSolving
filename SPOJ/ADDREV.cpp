#include<bits/stdc++.h>
using namespace std;
long long rev(long long n)
{
    long long i,s,sum=0;
    vector<int> r;
    for(i=0;n>0;i++){
        r.push_back(n%10);
        n/=10;
    }
    s=r.size();
    for(i=0;i<s;i++){
        sum=sum*10+r[i];
    }
    return sum;
}
int main()
{
    long long n,a,b,ans;
    cin>>n;
    while(n--){
        cin>>a>>b;
        ans=rev(a)+rev(b);
        ans=rev(ans);
        cout<<ans<<endl;
    }
    return 0;
}