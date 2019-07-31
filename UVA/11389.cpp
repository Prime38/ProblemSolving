#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,d,r;
    while(scanf("%d %d %d", &n, &d, &r) == 3){
        if(n==0) break;
        int morn[110],eve[110],i,extra=0;
        for(i=0;i<n;i++){
            cin>>morn[i];
        }
        sort(morn,morn+n);
        for(i=0;i<n;i++){
            cin>>eve[i];
        }
        sort(eve,eve+n,greater<int>());
        for(i=0;i<n;i++){
            if(morn[i]+eve[i]>d){
                extra=extra+(morn[i]+eve[i]-d)*r;
            }
        }
        cout<<extra<<endl;
    }
    return 0;
}