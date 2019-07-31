#include<bits/stdc++.h>
int main()
{
    int y,a,b,c,d;
    scanf("%d",&y);
    while(true){
        y+=1;
        a=y/1000;
        b=(y/100)%10;
        c=(y/10)%10;
        d=y%10;
        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d) break;
    }
    printf("%d",y);
    return 0;
}