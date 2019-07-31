#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,mx=-1000000000,my=-1000000000,x,y,mnx=1000000000,mny=1000000000;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if(x>mx)mx=x;
        if(y>my)my=y;
        if(x<mnx)mnx=x;
        if(y<mny)mny=y;
    }
    long long X=mx-mnx,Y=my-mny;
    cout<<max(X,Y)*max(X,Y)<<endl;
    return 0;
}