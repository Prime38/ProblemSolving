#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[110],a[110];
    int i,temp;
    cin>>s>>a;
    for(i=0;i<strlen(s);i++){
        if(s[i]>='A'&&s[i]<='Z'){
            s[i]=s[i]+'a'-'A';
        }
        if(a[i]>='A'&&a[i]<='Z'){
            a[i]=a[i]+'a'-'A';
        }
    }
    for(i=0;i<strlen(s);i++){
        if(s[i]<a[i]) {temp=-1;break;}
        else if(s[i]>a[i]){temp=1;break;}
        else if(s[i]==a[i]) {temp=0;}
    }
    cout<<temp;
    return 0;
}