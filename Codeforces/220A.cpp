#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,cnt=0;
    cin>>n;
    vector<int> a(n),b(n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    b=a;
    sort(b.begin(),b.end());
    for(i=0;i<n;i++){
        if(a[i]!=b[i])cnt++;
    }
    if(cnt>2)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}