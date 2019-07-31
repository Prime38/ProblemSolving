#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int a[100],i,j;
    cin>>s;
    for(i=0,j=0;i<s.size();i+=2){
        a[j]=s[i]-'0';
        j++;
    }
    sort(a,a+j);
    for(i=0,j=0;i<s.size();i++){
        if(i%2==1)cout<<"+";
        else {cout<<a[j];j++;}
    }
    return 0;
}
