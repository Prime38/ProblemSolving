#include<bits/stdc++.h>
using namespace std;
int main()
{
    float u,v,d,t1,t2,dif;
    int i,n;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>d>>v>>u;
        if(u>v&&u>0&v>0){
        t1=d/(sqrt(u*u-v*v));
        t2=d/u;
        dif=t1-t2;
        printf("Case %d: %.3lf\n",i,dif);
        }
        else cout<<"Case "<<i<<": can't determine"<<endl;
    }
    return 0;
}