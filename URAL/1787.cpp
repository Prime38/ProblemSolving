#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,a[110],i,sum=0;
    cin>>k>>n;
    for(i=1;i<=n;i++){
        cin>>a[i];
        sum+=a[i]-k;
        if(sum<0) sum=0;
    }
    if(sum<0) sum=0;
    cout<<sum<<endl;
    return 0;
}