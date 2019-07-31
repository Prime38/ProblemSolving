#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long i,sz;
    while(getline(cin,s)){
        sz=s.size();
        s[sz]=' ';
        stack<char> a;
        for(i=0;i<=sz;i++){
            if(s[i]!=' '){
                a.push(s[i]);
            }
            if(s[i]==' '){
                while(!a.empty()){
                    cout<<a.top();
                    a.pop();
                }
                if(i!=sz)cout<<' ';
            }
        }
        cout<<endl;
    }
    return 0;
}

