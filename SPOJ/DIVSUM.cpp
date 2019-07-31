#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        long long a=n/2,sum=0;
        for(i=1;i*i<n;i++){
            if(n%i==0)sum+=i+(n/i);
        }
        if (i*i==n)sum+=i;
        sum-=n;
        printf("%lld\n",sum);
    }
    return 0;
}