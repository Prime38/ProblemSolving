#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k, a[110],i,ans=0;
    cin>>k;
    for(i=0;i<12;i++){
        cin>>a[i];
    }
    sort(a,a+12);
    if(k==0){cout<<0<<endl;return 0;}
    if(a[11]>=k){cout<<1<<endl;return 0;}
    for(i=11;i>=0;i--){
        if(k>0){ans++;k-=a[i];}
        if(k<=0){cout<<ans<<endl;return 0;}
    }
    cout<<-1<<endl;
    return 0;
}
