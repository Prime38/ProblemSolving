#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,i,j,cnt1,cnt2,cnt;

    string s;
    cin>>n>>a>>b;
    cin>>s;
    cnt=0;
        if(s[a-1]==s[b-1]){
            cout<<0<<endl;;
        }
        else cout<<1<<endl;
        return 0;
}