#include<bits/stdc++.h>
using namespace std;
#define pi 3.14159265358
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++){
        double R,r,n;
        cin>>R>>n;
        r=((R*sin(pi/n))/(sin(pi/n)+1));
        printf("Case %d: %.10f\n",i,r);
    }
    return 0;
}