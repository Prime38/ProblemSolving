#include<stdio.h>
int main()
{
    int n,e,f,c,i,j,t,empt,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d %d",&e,&f,&c);
        sum=0;
        t=e+f;
        while(t>=c){
            empt=t%c;
            t=t/c;
            sum=sum+t;
            t=t+empt;
        }
        printf("%d\n",sum);
    }
    return 0;
}