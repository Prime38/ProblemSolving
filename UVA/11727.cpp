#include<stdio.h>
int main()
{
    int a,b,c,n,i,mid;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d %d",&a,&b,&c);
        if( (a<b&&b<c)||(c<b&&b<a)) mid=b;
        else if((b<a&&a<c)||(c<a&&a<b)) mid=a;
        else if((a<c&&c<b)||(b<c&&c<a)) mid=c;
        printf("Case %d: %d\n",i+1,mid);
    }
    return 0;

}