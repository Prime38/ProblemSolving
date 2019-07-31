
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    char ch[1000];
    int n,i,len;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>ch;
        len=strlen(ch);
        if(strcmp(ch,"1")==0||strcmp(ch,"4")==0||strcmp(ch,"78")==0) cout<<"+"<<endl;
        else if(ch[len-1]=='5'&&ch[len-2]=='3') cout<<"-"<<endl;
        else if(ch[len-1]=='4'&&ch[0]=='9') cout<<"*"<<endl;
        else if(ch[0]=='1'&&ch[1]=='9'&&ch[2]=='0')cout<<"?"<<endl;
    }
    return 0;
}