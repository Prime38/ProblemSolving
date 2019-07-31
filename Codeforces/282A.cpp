#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=0,n;
    char s[10];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if((strcmp(s,"X++")==0)||strcmp(s,"++X")==0) x++;
        if((strcmp(s,"X--")==0)||strcmp(s,"--X")==0) x--;
        }
    cout<<x;
    return 0;
}