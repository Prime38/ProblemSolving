#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,i,j,cnt=0,p;
    cin>>n>>x;
    set<long long> s;
    set<long long> ::iterator it;
    if(x==1){cout<<1<<endl;return 0;}
    for(i=2;i<=x&&i<=n;i++){
        if(x%i==0&&(x/i)<=n){s.insert(i);s.insert(x/i);}
    }
    cout<<s.size()<<endl;
    return 0;
}