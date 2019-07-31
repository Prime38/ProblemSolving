#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,ans,s,temp=0;;
    cin>>a>>b>>s;
    if(a<0)a=-a;
    if(b<0)b=-b;
    if(s==a+b) temp=1;
    else if(s<a+b)temp=0;
    else if(s>a+b){
        long long t=a+b-s;
        if(t%2==0)temp=1;
        else if(t%2==1)temp=0;
    }
    if(temp==1)cout<<"Yes";
    else if(temp==0)cout<<"No";
    return 0;
}