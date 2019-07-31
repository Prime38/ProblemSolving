#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
    if((n==1)||(n==0))return(n);
    else return(fib(n-1)+fib(n-2));
}
int main()
{
    int n,ans;
    while(cin>>n){
            if(n==0) break;
       ans=fib(n+1);
       cout<<ans<<endl;
    }
    return 0;
}