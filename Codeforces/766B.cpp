#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j;
    cin>>n;
    long long a[n+10];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(j=0;j<n;j++){
        for(i=j+2;i<n;i++){
            if(a[i]<a[j]+a[j+1]){
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
 
    cout<<"NO"<<endl;
    return 0;
}