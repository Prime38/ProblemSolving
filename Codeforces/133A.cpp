#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[110];
    int i,temp=0;
    cin>>s;
    for( i=0;i<strlen(s);i++){
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
             temp++; break;
        }
    }
    if(temp>0)cout<<"YES";
    else cout<<"NO";
    return 0;
}