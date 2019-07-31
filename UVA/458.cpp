#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    long long i,s;
    while(cin>>a){
        s=a.size();
        for(i=0;i<s;i++){
            cout<<char(a[i]-7);
        }
        cout<<endl;
    }
    return 0;
}