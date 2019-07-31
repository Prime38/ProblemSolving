#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int ups=0,lows=0;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(isupper(s[i]))ups++;
        else lows++;
    }

    if(lows>=ups){
        for(int i=0;i<s.length();i++){

        if(isupper(s[i])){
            s[i]+=32;
        }
        }
    }
    else{
        for(int i=0;i<s.length();i++){
        if(islower(s[i]))s[i]-=32;
        }
    }
    cout<<s<<endl;
    return 0;
}