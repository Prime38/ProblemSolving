#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,x[1005],y[1005],v[1005],i,n;
    double dis[1005],time[1005],mini;
    scanf("%d %d",&a,&b);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d %d",&x[i],&y[i],&v[i]);
        dis[i]=sqrt((a-x[i])*(a-x[i])+(b-y[i])*(b-y[i]));
        time[i]=dis[i]/v[i];
    }
    mini=time[0];
    for(i=1;i<n;i++){
        if(time[i]<mini) mini=time[i];
    }
    printf("%lf",mini);
    return 0;
}