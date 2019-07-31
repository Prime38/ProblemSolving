#include<bits/stdc++.h>
#include<math.h>
int main()
{
    int t,i;
    double r,area,pi;
    pi=2*acos(0.0);
    scanf("%d",&t);
    for( i=0;i<t;i++){
        scanf("%lf",&r);
        area=r*r*(4-pi);
        printf("Case %d: %.2lf\n",i+1,area);
    }
    return 0;
}