#include<stdio.h>
int main()
{
    int n,a[15][15],i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i==1){
            for(j=1;j<=n;j++){
                a[i][j]=1;
            }
        }
        else{
                a[i][1]=1;
            for(j=2;j<=n;j++){
                a[i][j]=a[i-1][j]+a[i][j-1];
            }
        }
    }
    printf("%d",a[n][n]);
    return 0;
}