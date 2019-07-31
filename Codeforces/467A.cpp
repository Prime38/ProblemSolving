#include<stdio.h>
int main()
{
    int n,p,q,i,dif,temp;
    scanf("%d",&n);
    temp=0;
    for(i=0;i<n;i++){
        scanf("%d %d",&p,&q);
        dif=q-p;
        if(dif>=2) temp++;
    }
    printf("%d",temp);
    return 0;
}