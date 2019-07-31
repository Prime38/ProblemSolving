#include<bits/stdc++.h>
int main()
{
    int t,n,a[1090],i,j,sum;
    scanf("%d\n",&t);
    for(i=1;i<=t;i++){
        sum=0;
        scanf("%d\n",&n);
        for(j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        for(j=0;j<n;j++){
            if(a[j]<0) a[j]=0;
            sum=sum+a[j];
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
