#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        int x, y;
        cin>>x>>y;
        if((y>x)||(y<x-2)||(y==x-1)){
            cout<<"No Number\n";
            continue;
        }
        if( (x&1) && (y&1)){
            cout<<x+y-1<<endl;
            continue;
        }
        cout<<x+y<<endl;
    }
    return 0;
}