#include<bits/stdc++.h>>
using namespace std;
int main()
{
    long long n,m;
    while(cin>>n>>m){
        double posn[n+5],posm[n+m+5],p=10000,total=0;
        for(int i=0;i<n;i++){
            posn[i]=i*(p/n);
        }
        for(int i=0;i<n+m;i++){
            posm[i]=i*(p/(m+n));
        }
        for(int i=1;i<n;i++){
            double dist,mini=5000;
            for(int j=1;j<n+m;j++){
                dist=abs(posn[i]-posm[j]);
                mini=min(dist,mini);
            }
            total+=mini;
        }
    printf("%.5lf\n",total);
    }
    return 0;
}