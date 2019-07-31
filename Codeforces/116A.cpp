#include<stdio.h>
int main()
{
    int n,i,a,b,sum[1100],temp;
    sum[0]=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        sum[i+1]=sum[i]-a+b;
    }
    for(i=1,temp=sum[0];i<n+1;i++){
        if(sum[i]>temp) temp=sum[i];
    }
    printf("%d",temp);
    return 0;
}