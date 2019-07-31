#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long a[n+1],b[n/2+1];
    for(long long i=0;i<n/2;i++){
        cin>>b[i];
    }
    a[0]=0;
    a[n-1]=b[0];
    for(long long i=1;i<n/2;i++){
        long long p=a[i-1];
        long long q=b[i]-p;
        if(q>a[n-i]){
            q=a[n-i];
            p=b[i]-q;
        }
        a[i]=p;
        a[n-i-1]=q;
 
    }
    for(long long i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}