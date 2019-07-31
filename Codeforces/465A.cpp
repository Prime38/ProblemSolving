#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[110],i,p;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    bool flag=true;
    p=s.size();
    for(i=0;i<p;i++){
        if(flag){
            if(s[i]=='0')
                flag=false;
                ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}