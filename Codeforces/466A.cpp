#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,sum,ans1,ans2;
    cin>>n>>m>>a>>b;
    float t=b/m;
    if(m>n){
        if(b<=n*a) sum=b;
        else sum=n*a;
    }
    else if(t>=a) sum=n*a;
    else if(t<a){
        ans1=(n/m)*b+(n%m)*a;
        ans2=(n/m)*b+b;
        if(ans1>=ans2) sum=ans2;
        else sum=ans1;}
    cout<<sum;
    return 0;
}