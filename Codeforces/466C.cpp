#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    vector<int> a(n+5),cnt(n+5);
    long long sum=0,s=0,ans=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%3!=0){cout<<0<<endl;return 0;}
    sum/=3;
    for(i=n-1;i>=0;i--){
        s+=a[i];
        if(s==sum)cnt[i]=1;
    }
    for(i=n-2;i>=0;i--){
        //if(s>=sum)
        cnt[i]+=cnt[i+1];
        //cout<<i<<" "<<cnt[i]<<endl;
    }
    //cout<<"*"<<endl;
    s=0;
    for(i=0;i<n-2;i++){
        s+=a[i];
        if(s==sum)ans+=cnt[i+2];
        //cout<<ans<<" "<<cnt[i+2]<<endl;
    }
    cout<<ans<<endl;
    return 0 ;
}