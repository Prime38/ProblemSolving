#include<stdio.h>
int main()
{
    long int t,a,b,c;int i;
    scanf("%ld",&t);
    for(i=1;i<=t;i++){
        scanf("%ld %ld %ld",&a,&b,&c);
        if(a>b&&a>c&&b*b+c*c==a*a)printf("Case %d: yes\n",i);
        else if(b>a&&b>c&&b*b==a*a+c*c) printf("Case %d: yes\n",i);
        else if(c>a&&c>b&&c*c==a*a+b*b)printf("Case %d: yes\n",i);
        else printf("Case %d: no\n",i);
    }
    return 0;
}