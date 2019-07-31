#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,s,d,a,b;
    cin>>n;
    while(n--){
        cin>>s>>d;
        if(s<d){cout<<"impossible"<<endl;continue;}
        else{
            a=(s+d)/2;
            b=(s-d)/2;
            if(a+b==s)cout<<a<<" "<<b<<endl;
            else{cout<<"impossible"<<endl;continue;}
        }
    }
    return 0;
}
