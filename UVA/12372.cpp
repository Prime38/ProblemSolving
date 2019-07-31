#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,l,h,w,i;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>l>>h>>w;
        if(l<=20&&h<=20&&w<=20){
            printf("Case %d: good\n",i);
        }
        else printf("Case %d: bad\n",i);
    }
    return 0;
}