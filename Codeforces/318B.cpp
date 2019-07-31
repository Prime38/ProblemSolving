#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,h,m;
    h="heavy";
    m="metal";
    cin>>s;
    if(s.size()<10){cout<<0<<endl;return 0;}
    long long ch=0,total=0;
    for(int i=0;i<s.size()-4;i++){
        string c=s.substr(i,5);
        if(c==h)ch++;
        else if(c==m)total+=ch;
    }
    cout<<total<<endl;
    return 0;
}
