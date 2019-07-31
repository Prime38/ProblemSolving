#include<bits/stdc++.h>
#include<string.h>
int main()
{
    int n,i,length;
    char a[110];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%s",a);
        length=strlen(a);
        if(length<=10) printf("%s\n",a);
        else printf("%c%d%c\n",a[0],(length-2),a[length-1]);
    }
    return 0;
}