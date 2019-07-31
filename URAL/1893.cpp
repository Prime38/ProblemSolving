#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;

    char c;
    cin>>s;
    if(s[s.size()-1]=='A'||s[s.size()-1]=='K'){cout<<"window"<<endl; return 0;}
    if(s.size()==2){
        if(s>="1A"&&s<="2D"){
            if(s[s.size()-1]=='D'){cout<<"window"<<endl;return 0;}
            else {cout<<"aisle"<<endl;return 0;}
        }
        else {
            if(s[s.size()-1]=='F'){cout<<"window"<<endl;return 0;}
            else {cout<<"aisle"<<endl;return 0;}
        }
    }

    else if(s.size()==3){
        if(s>="10A"&&s<="20F"){
            if(s[s.size()-1]=='F'){cout<<"window"<<endl;return 0;}
            else {cout<<"aisle"<<endl;return 0;}
        }
        else if(s>="21A"&&s<="65k"){
            if(s[s.size()-1]=='K'){cout<<"window"<<endl;return 0;}
            else if(s[s.size()-1]=='C'||s[s.size()-1]=='D'||s[s.size()-1]=='G'||s[s.size()-1]=='H'){cout<<"aisle"<<endl;return 0;}
            else cout<<"neither"<<endl;
        }
    }
    return 0;
}