#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    map<char,int> hasa,hasc;
    a=a+b;
    int i,flag=0;
    for(i=0;i<a.size();i++){
        hasa[a[i]]++;
    }
    for(i=0;i<c.size();i++){
        hasc[c[i]]++;
    }
    for(char ch='A';ch<='Z';ch++){
        if(hasa[ch]!=hasc[ch]){flag++;break;}
    }
    if(flag==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}