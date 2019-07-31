#include<bits/stdc++.h>
int main()
{
    int n,t,v,p,i,sum,cnt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d %d",&t,&v,&p);
        sum=t+v+p;
        if(sum>=2) cnt++;
    }
    printf("%d",cnt);
    return 0;
}