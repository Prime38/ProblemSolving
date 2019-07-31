#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,cnt=0;
    cin>>n;
    int a[n+5];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        for(j=n-1;j>=i+1;j--){
            if(a[j]<a[j-1]){swap(a[j],a[j-1]);cnt++;}
        }
    }
    for(i=0;i<n;i++){
        cout<<a[i];
        if(i==n-1)cout<<endl;
        else cout<<" ";
    }
    cout<<cnt<<endl;
    return 0;
}