#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a[100100],i,mini=1000000000,index;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<mini){index=i;mini=a[i];}
    }
    sort(a,a+n);
    if(a[0]==a[1])cout<<"Still Rozdil"<<endl;
    else cout<<index+1<<endl;
    return 0;
}