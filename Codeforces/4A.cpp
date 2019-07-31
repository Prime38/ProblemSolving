#include<bits/stdc++.h>
int main()
{
    int w,a,b,temp=0;
    scanf("%d",&w);
    for(a=2;a<w;a+=2){
        b=w-a;
        if((a%2==0)&&(b%2==0)){temp=1; break;}
    }
    if(temp==1) printf("YES");
    else printf("NO");
    return 0;
}