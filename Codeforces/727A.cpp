#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b ;
    cin>>a>>b;
    set<int >s;
    set<int> ::iterator it;
    s.insert(a);
    s.insert(b);
    while(b>a&&(b%2==0||b%10==1)){
        while(b%2==0&&b>a){b/=2;s.insert(b);}
        //if(b%10!=1){cout<<"NO"<<endl;return 0;}
        while(b%10==1&&b>a){b/=10;s.insert(b);}
    }
    if(b!=a){cout<<"NO"<<endl;return 0;}
    else {
        cout<<"YES"<<endl;
        cout<<s.size()<<endl;
        for(it=s.begin();it!=s.end();it++){
            cout<<*it<<" ";
        }
        return 0;
    }
}