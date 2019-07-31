#include<stdio.h>
int main()
{
    int n,k=0,i,j;
    long long factk;
    char ch;
    scanf("%d",&n);
    while(1){
        scanf("%c",&ch);
        if(ch=='\n') break;
        else if(ch=='!') k++;
    }
    if(n%k==0) j=k;
    else if(n%k!=0) j=n%k;
    factk=1;
    for(i=0;(n-i)>=j;i+=k){
        factk=factk*(n-i);
    }
    printf("%lld\n",factk);

    return 0;
}