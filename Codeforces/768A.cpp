#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,cnt=0;
    cin>>n;
    long long a[n+5];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n<=2){cout<<0<<endl;return 0;}
    sort(a,a+n);
    for(i=1;i<n-1;i++){
        if(a[i]>a[0]&&a[i]<a[n-1])cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}