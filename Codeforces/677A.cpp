#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,i,total=0;
    cin>>n>>h;
    int a[n+5];
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<=h)total+=1;
        else if(a[i]>h)total+=2;
    }
    cout<<total<<endl;
    return 0;
}
