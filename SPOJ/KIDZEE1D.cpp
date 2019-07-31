#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    string ch;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>n;
        if(n>=80) ch="A+";
        else if(n>=75&&n<=79) ch="A";
        else if(n>=70&&n<=74) ch="A-";
        else if(n>=65&&n<=69) ch="B+";
        else if(n>=60&&n<=64) ch="B";
        else if(n>=55&&n<=59) ch="B-";
        else if(n>=50&&n<=54) ch="C";
        else if(n>=45&&n<=49) ch="D";
        else if(n<=44) ch="F";
        cout<<"Case "<<i<<": "<<ch<<endl;
    }
    return 0;
}