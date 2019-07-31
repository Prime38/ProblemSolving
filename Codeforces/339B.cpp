#include<bits/stdc++.h>
using namespace std;
long long a[100100];
int main()
{
    long long n,m,i,total=0;
    cin>>n>>m;
    a[0]=1;
    for(i=1;i<=m;i++){
        cin>>a[i];
        if(a[i]>a[i-1]) total+=a[i]-a[i-1];
        else if(a[i]<a[i-1]) total+=n+a[i]-a[i-1];
    }
    cout<<total<<endl;
    return 0;
}
