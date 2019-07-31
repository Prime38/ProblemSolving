#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,m=0,ans;
    cin>>a>>b>>c;
    ans=a+(b*c);
    if(ans>m)m=ans;
    ans=a*(b+c);
    if(ans>m)m=ans;
    ans=a*b*c;
    if(ans>m)m=ans;
    ans=(a+b)*c;
    if(ans>m)m=ans;
    ans=a+b+c;
    if(ans>m)m=ans;
    ans=(a*b)+c;
    cout<<m<<endl;
    return 0;
}