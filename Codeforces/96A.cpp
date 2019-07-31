#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[110];
    int i,j,temp;
    cin>>s;
    for(i=0;i<strlen(s);i++){
        temp=1;
        for(j=i+1;j<i+7;j++){
            if(s[j]==s[i])temp++;
            else break;
        }
        if(temp==7) break;
    }
    if(temp==7) cout<<"YES";
    else cout<<"NO";
    return 0;
}