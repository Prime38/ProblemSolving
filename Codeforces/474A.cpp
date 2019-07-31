#include<bits/stdc++.h>
using namespace std;
string s1="qwertyuiop";
string s2="asdfghjkl;";
string s3="zxcvbnm,./";

int main()
{
    string a; char c; int p;
    cin>>c;
    cin>>a;
    if(c=='R') p=-1;
    else p=1;
    long long i,sz,j;
    sz=a.size();
    for(i=0;i<sz;i++){
        if(a[i]==' ')cout<<" ";
        else{
            for(j=0;j<14;j++){
                if(a[i]==s1[j]){cout<<s1[j+p]; break;}
                else if(a[i]==s2[j]){cout<<s2[j+p]; break;}
                else if(a[i]==s3[j]){cout<<s3[j+p]; break;}
            }
        }
    }
    return 0;
}

