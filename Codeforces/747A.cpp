#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,r,c,sq;
    cin>>n;
    sq=sqrt(n);
    for(r=sq;r>0;r--){
        c=n/r;
        if(r*c==n){break;}
    }
    cout<<r<<" "<<c<<endl;
    return 0;
}