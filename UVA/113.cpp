#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,p;
    while(cin>>n>>p){
        cout.precision(0);
        cout<<fixed<<pow(p,1.0/n)<<"\n";
        }
    return 0;
}