#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,a[105],i,ans=0;
    cin>>n>>c;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=1;i<n;i++){
        if((a[i]+c)<a[i-1]){
            int temp=a[i-1]-a[i]-c;
            ans=max(ans,temp);
        }
    }
    cout<<ans<<endl;
    return 0;
}