#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,i,j;
    cin>>n>>x>>y;
    set<double> s;
    for(i=0;i<n;i++){
        double n1,n2;
        cin>>n1>>n2;
        if((n1-x)==0){s.insert(100);}
        else{
            double m=(n2-y)/(n1-x);
            s.insert(m);
        }
    }
    cout<<s.size()<<endl;
    return 0;
}