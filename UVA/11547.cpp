#include<stdio.h>
int main()
{
    int t,n,r;
    double ans;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        ans=(((n*567/9)+7492)*235/47)-498;
        long long p=ans/10;
        r=p%10;
        if(r<0)r=-r;
        printf("%d\n",r);
    }
    return 0;
}