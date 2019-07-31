
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,i,j,sq;
    cin>>n>>k;
    sq=sqrt(n);
    set<long long> s;
    s.insert(1);
    s.insert(n);
    set<long long> ::iterator it;
    for(i=2;i<=sq;i++){
        if(n%i==0){
            s.insert(i);
            s.insert(n/i);
        }
    }
    int d=s.size();
    vector<long long > v(d);
    if(d<k)cout<<-1<<endl;
    else {
        for(it=s.begin(),i=0;it!=s.end();it++,i++){
            v[i]=*it;
            if(i==k-1){cout<<v[i]<<endl;break;}
        }
    }
    return 0;
}