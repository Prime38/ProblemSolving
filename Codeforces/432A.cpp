#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,a[2010],temp=0;
    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]+k<=5)temp++;
    }
    cout<<temp/3<<endl;
    return 0;
}