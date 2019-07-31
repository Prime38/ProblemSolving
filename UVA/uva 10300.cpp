#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,n,total,t,p;
    while(cin>>t){
        while(t--){
            cin>>n;
            total=0;
            while(n--){
                cin>>a>>b>>c;
                total+=(a*c);
            }
            cout<<total<<endl;
        }
    }
    return 0;
}
