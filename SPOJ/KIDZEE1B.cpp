#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i,ans,t;
    cin>>t;
    for(i=1;i<=t;i++){
    cin>>a>>b>>c;
    ans=a+b+c;
    printf("Case %d: Sum of %d, %d and %d is %d\n",i,a,b,c,ans);
    }
    return 0;
}