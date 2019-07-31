#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,cnt=0;
    cin>>n>>k;
    int a[n+5];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n-1;i++){
        if(a[n-1]-a[i]<k)break;
        for(int j=i+1;j<n;j++){
            if(a[j]-a[i]==k){cnt++;break;}
            else if(a[j]-a[i]>k)break;
        }
    }
    cout<<cnt<<endl;
    return 0;
}