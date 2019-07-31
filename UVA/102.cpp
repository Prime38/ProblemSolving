#include<bits/stdc++.h>
using namespace std;
int main()
{
    long  long b1,b2,b3,g1,g2,g3,c1,c2,c3,total,m;
    string a;
    while(cin>>b1>>g1>>c1>>b2>>g2>>c2>>b3>>g3>>c3){
        m=b1+b2+b3+g1+g2+g3+c1+c2+c3;
        total=b2+b3+g1+g2+c1+c3;
        if(total<m){m=total;a="BCG"; }
        total=b2+b3+g1+g3+c1+c2;
        if(total<m){m=total;a="BGC"; }
        total=b1+b3+g1+g2+c3+c2;
        if(total<m){m=total;a="CBG"; }
        total=b2+b1+g1+g3+c3+c2;
        if(total<m){m=total;a="CGB"; }
        total=b1+b3+g2+g3+c1+c2;
        if(total<m){m=total;a="GBC"; }
        total=b2+b1+g2+g3+c1+c3;
        if(total<m){m=total;a="GCB"; }
        cout<<a<<" "<<m<<endl;
    }
    return 0;
}
