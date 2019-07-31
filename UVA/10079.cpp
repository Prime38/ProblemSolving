#include<stdio.h>
int main()
{
    int i;long long n,sum;
    while((scanf("%lld",&n))==1&&n>=0){
        sum=(n*n+n+2)/2;
        printf("%lld\n",sum);
    }
    return 0;

}