#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt,i,j,an=0,bn=0,ar=0,ab=0;
    string s,a,b;
    cin>>n>>s;
    a=s;
    b=s;
    for(i=0;i<n;i++){
        if(i%2==0){a[i]='r';b[i]='b';}
        else {a[i]='b';b[i]='r';}
    }
    for(i=0;i<n;i++){
        if(s[i]!=a[i])an++;
        if(s[i]!=b[i])bn++;
    }
    if(an>bn)a=b;
    for(i=0;i<a.size();i++){
        if(s[i]!=a[i]&&s[i]=='r')ar++;
        else if(s[i]!=a[i]&&s[i]=='b')ab++;
    }
    cout<<max(ab,ar)<<endl;
    return 0;
}