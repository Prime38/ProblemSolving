#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+5],i;
    long long total=0,temp;
    for(i=0;i<n;i++){
        cin>>a[i];
        total+=a[i];
    }
    temp=total;
    sort(a,a+n);
    for(i=0;i<n-1;i++){
        total+=a[i];
        temp-=a[i];
        total+=temp;
    }
    cout<<total<<endl;
    return 0;
}