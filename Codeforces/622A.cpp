#include<stdio.h>
int  main()
{
    long long n,ans,sub,i,temp;
    scanf("%lld",&n);
    for(i=1,ans=1;ans<=n;i++){
        ans=i*(i+1)/2;
    }
    ans=ans-i;
    temp=n-ans-1;
    if(temp==0)temp=i-2;
    printf("%lld\n",temp);
    return 0;
}