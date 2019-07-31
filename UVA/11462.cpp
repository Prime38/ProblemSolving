#include<bits/stdc++.h>
using namespace std;
int a[2000010];
int main()
{
    int n;
    bool f = false;

    while(scanf("%d",&n)&&n){


        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        for(int i=0;i<n-1;i++){
            printf("%d ",a[i]);
        }
         printf("%d",a[n-1]);printf("\n");

    }
    return 0;
}