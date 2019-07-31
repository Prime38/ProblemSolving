
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,a[100100];
    cin>>t;
    while(t--){
        cin>>n;
        long long i,cnt=1;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<n-1;i++){
            if(a[i]!=a[i+1])cnt++;
            }
            cout<<cnt<<endl;
    }
    return 0;
}