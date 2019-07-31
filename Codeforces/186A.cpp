#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b; char p[10],q[10];
    long long i,s1,s2,j,cnt=0,k;
    cin>>a>>b;
    s1=a.size();
    s2=b.size();
    if(s1!=s2){
        cout<<"NO"<<endl;
        return 0;
    }
    for(i=0;i<s1;i++){
        if(a[i]!=b[i]){
            p[cnt]=a[i];
            q[cnt]=b[i];
            cnt++;
        }
        if(cnt>2){cout<<"NO"<<endl;return 0;}
    }
    if(cnt==0)cout<<"YES"<<endl;
    else if(cnt==2){
        if(p[0]==q[1]&&q[0]==p[1]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}
