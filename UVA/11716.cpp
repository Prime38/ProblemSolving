#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j;
    cin>>t;
    getchar();
    while(t--){
        string s;
        getline(cin,s);
        int sz=s.size();
        int sq=sqrt(sz);
        if(sq*sq!=sz){cout<<"INVALID"<<endl; continue;}
        for(i=0;i<sq;i++){
            for(j=i;j<sz;j+=sq){
                cout<<s[j];
            }
        }
        cout<<endl;
    }
    return 0;
}