#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,ta=0,tb=0,tc=0;
    long long a,b,c;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        ta=ta+a;
    }
    for(i=0;i<n-1;i++){
        cin>>b;
        tb=tb+b;
    }
    for(i=0;i<n-2;i++){
        cin>>c;
        tc=tc+c;
    }
    cout<<ta-tb<<endl;
    cout<<tb-tc<<endl;
    return 0;
}