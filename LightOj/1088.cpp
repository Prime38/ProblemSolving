#include<stdio.h>
int main()
{
    int t,n,i,x[110],y[110],x1,x2,y1,y2,j;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        scanf("%d",&n);
        for(j=0;j<n;j++){
            scanf("%d %d",&x[j],&y[j]);
        }
        printf("Case %d:\n",i+1);
        for(j=0;j<n;j++){
            if(x[j]<x2&&x[j]>x1&&y[j]<y2&&y[j]>y1) printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}