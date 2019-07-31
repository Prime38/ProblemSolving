#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        map<char,int> m;
        for(int i=0;i<a.size();i++){
            m[a[i]]++;
        }
        for(char k='a';k<='z';k++){
            if(m[k]>0)cout<<m[k]<<k;
        }
        cout<<endl;
    }
    return 0;
}