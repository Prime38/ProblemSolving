#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,flag;
    string s;
    cin>>n;
    getchar();
    cin>>s;
    int sz=s.size();
    if(sz%4!=0){cout<<"==="<<endl; return 0;}
    int p=sz/4; int a=0,c=0,g=0,t=0,u=0;
    for(i=0;i<sz;i++){
        if(s[i]=='A')a++;
        else if(s[i]=='C')c++;
        else if(s[i]=='G')g++;
        else if(s[i]=='T')t++;
        else if(s[i]=='?')u++;
    }
    if(a>p||c>p||g>p||t>p){cout<<"==="<<endl; return 0;}
    a=p-a;c=p-c;g=p-g;t=p-t;
    for(i=0;i<sz;i++){
        if(s[i]=='?'){
            if(a>0){s[i]='A';a--;}
            else if(g>0){s[i]='G';g--;}
            else if(c>0){s[i]='C';c--;}
            else if(t>0){s[i]='T';t--;}
        }
    }
    cout<<s<<endl;
    return 0;
}