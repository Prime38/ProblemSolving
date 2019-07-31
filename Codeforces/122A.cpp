#include<bits/stdc++.h>
int main()
{
    int t, n,a,b;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        a=n/2; b=n-a;
        printf("%d %d\n",a,b);
    }
    return 0;
}