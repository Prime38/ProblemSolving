#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--){
        string s;
        int ma=0;
        getline(cin,s);
        map<char ,int> m;
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])){
                if(isupper(s[i]))s[i]=tolower(s[i]);
                m[s[i]]++;
                if(m[s[i]]>ma)ma=m[s[i]];
            }
        }
        for( char i='a';i<='z';i++){
            if(m[i]==ma)cout<<i;
        }
        cout<<endl;
    }
    return 0;
}