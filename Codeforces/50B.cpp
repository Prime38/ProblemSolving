#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long i,j,sz;
    long long cnt=0;
    long long flag[300];
    cin>>s;
    sz=s.size();
    memset(flag,0,sizeof(flag));
    for(i=0;i<sz;i++){
        flag[s[i]-'0']++;
    }
    for(i=0;i<256;i++){
        cnt+=flag[i]*flag[i];
    }
    cout<<cnt<<endl;
   return 0;
}