#include<bits/stdc++.h>
using namespace std;
int main()
{
    double p=1.0,ma=0.000000;
    int n,m,k,a,b;
    cin>>n;
    vector<int> x(n);
    for(int i=0;i<n;i++)cin>>x[i];
    cin>>m;
    vector<int> y(m);
    for(int i=0;i<m;i++)cin>>y[i];
    cin>>k;
    vector<int> z(k);
    for(int i=0;i<k;i++)cin>>z[i];
    cin>>a>>b;
    vector<double> v;
    for(int i=0;i<m;i++){
        for(int j=0;j<k;j++){
            double rat=(b*y[i]*p)/((a*z[j]*p)+(b*y[i]*p));
            rat=sqrt(rat);
            if(rat>ma)ma=rat;
        }
    }
    sort(x.begin(),x.end());
    double ans=x[n-1]*ma;
    cout.precision(8);
    cout<<ans<<endl;
    return 0;
}