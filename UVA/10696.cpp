#include<bits/stdc++.h>
using namespace std;
long long f91(long long n)
{
    if(n>=101) return (n-10);
    else if(n<=100) return f91(f91(n + 11));
}
int main()
{
    long long n,a;
    while(cin>>n){
        if(n==0) break;
        a=f91(n);
    cout<<"f91("<<n<<") = "<<a<<endl;
    }
    return 0;
}