#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a%2==0||b%2==1) cout<<"yes"<<endl;
    else if(a%2==1||b%2==0)cout<<"no"<<endl;
    return 0;
}