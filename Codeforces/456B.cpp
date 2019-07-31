#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int y=((a[a.size()-1]-'0')+10*(a[a.size()-2]-'0'));
    if(y%4==0)cout<<4<<endl;
    else cout<<0<<endl;
    return 0;
}