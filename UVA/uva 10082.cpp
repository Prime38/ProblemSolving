#include<bits/stdc++.h>
using namespace std;
string s1="QWERTYUIOP[]\\";
string s2="ASDFGHJKL;'";
string s3="ZXCVBNM,./";
string s4="`1234567890-=";
int main()
{
    string a;
    while(getline(cin,a)){
    long long i,sz,j;
    sz=a.size();
    for(i=0;i<sz;i++){
        if(a[i]==' ')cout<<" ";
        else{
            for(j=0;j<14;j++){
                if(a[i]==s1[j]){cout<<s1[j-1]; break;}
                else if(a[i]==s2[j]){cout<<s2[j-1]; break;}
                else if(a[i]==s3[j]){cout<<s3[j-1]; break;}
                else if(a[i]==s4[j]){cout<<s4[j-1]; break;}
            }
        }
    }
    cout<<endl;
    }
    return 0;
}
