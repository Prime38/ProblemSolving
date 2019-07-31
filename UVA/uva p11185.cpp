#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    stack<short int> a;
    while(cin>>n){
        if(n<0)break;
        while(n>0){
            a.push(n%3);
            n=n/3;
        }
        while(!a.empty()){
            cout<<a.top();
            a.pop();
        }
        cout<<"\n";
    }
    return 0;
}
