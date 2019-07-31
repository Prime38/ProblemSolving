#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s)){
        if(iscntrl(s[0]))break;
        int ma=0;
        map<char,int> m;
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])){
                m[s[i]]++;
                if(m[s[i]]>ma)ma=m[s[i]];
            }
        }
        for( char i='A';i<='z';i++){
            if(m[i]==ma)cout<<i;
        }
        cout<<" "<<ma<<endl;
    }
    return 0;
}