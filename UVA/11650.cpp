#include<stdio.h>
int main()
{
    int h1,h2,m1,m2,i,t,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%02d:%02d",&h1,&m1);
        if (h1==12) h1=0;
        t=h1*60+m1;
        h2=(720-t)/60;
        m2=(720-t)%60;
        if(h2==0) h2=12;
        printf("%02d:%02d\n",h2,m2);
    }
    return 0;
}