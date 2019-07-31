#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++){
        double a,b;
        char c;
        cin>>a>>c>>b;

        double r = sqrt(a * a + b * b);
        double alpha = atan(b / a);
        double arc = r * alpha;
        double ra = 400.0 / (2.0 * a + 2.0 * arc);
        cout<<"Case "<<i<<": ";
        a=a*ra;
        b=b*ra;
        cout.precision(11);
        cout<<a<<" "<<b<<endl;

    }
    return 0;
}