#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int cas=1;cas<=t;cas++){
        int a,b;
        cin>>a>>b;

        int x = abs(a-b)*4+11+4*a+8;
        cout<<"Case "<<cas<<": "<<x<<endl;
    }
    return 0;
}