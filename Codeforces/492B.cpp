#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,i;
    cin>>n>>l;
    int a[n+10];
    int ds,de;
    int temp,m;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    ds=a[0]*2;
    de=(l-a[n-1])*2;
    if(ds>de)m=ds;
    else m=de;
    for(i=0;i<n-1;i++){
        temp=a[i+1]-a[i];
        if(temp>m)m=temp;
    }
   cout.precision(10);
   cout<<fixed<<m/2.0<<endl;
   return 0;
}