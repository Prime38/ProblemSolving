#include<bits/stdc++.h>
#include<math.h>
int sqr(long long n)
{
    double sqt=sqrt(n);
    if(sqt==(int)sqt) return 1;
    else  return 0;
}
int main()
{
    int t,cnt;
    long long a,b,i;
    while((scanf("%lld %lld",&a,&b))==2){
        if(a==0&&b==0) break;
        cnt=0;
        for(i=a;i<=b;i++){
            if(sqr(i)==1) cnt++;

        }
        printf("%d\n",cnt);
    }
    return 0;
}