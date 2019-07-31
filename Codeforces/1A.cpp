#include<stdio.h>
int main()
{
    long long n,m,a,total;
    scanf("%I64d %I64d %I64d",&n,&m,&a);
    if(n%a!=0)n=((n/a+1)*a);
    if(m%a!=0)m=((m/a+1)*a);
    total=(n/a)*(m/a);
    printf("%I64d",total);
    return 0;
}
