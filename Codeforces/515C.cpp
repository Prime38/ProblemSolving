#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    string s;
    cin>>s;
    vector<int> v;
    for(i=0;i<s.size();i++){
        if(s[i]>'1'){
            if(s[i]=='4'){v.push_back(3);v.push_back(2);v.push_back(2);}
            else if(s[i]=='6'){v.push_back(3);v.push_back(5);}
            else if (s[i]=='8'){v.push_back(7);v.push_back(2);v.push_back(2);v.push_back(2);}
            else if(s[i]=='9'){v.push_back(7);v.push_back(3);v.push_back(3);v.push_back(2);}
            else v.push_back(s[i]-'0');
        }
    }
    sort(v.begin(),v.end());
    for(i=v.size()-1;i>=0;i--){
        cout<<v[i];
    }
    cout<<endl;
    return 0;
}