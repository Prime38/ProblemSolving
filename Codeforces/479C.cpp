#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,day;
    cin>>n;
    pair<long long ,long long>p[n+10];
    for(i=0;i<n;i++){
        cin>>p[i].first>>p[i].second;
    }
    if(n==1){
        cout<<min(p[0].first,p[0].second);return 0;
    }
    sort(p,p+n);
    day=p[0].second;
    for(i=1;i<n;i++){
        if(day<=p[i].second)day=p[i].second;
        else day=p[i].first;
    }
    cout<<day<<endl;
    return 0;
}