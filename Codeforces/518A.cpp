#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t,mid;
    int i,cnt=0;
    cin>>s>>t;
    mid=s;
    for(i=s.size()-1;i>=0;i--){
        if(mid[i]=='z')
            mid[i]-=25;
        else{
            mid[i]++;
            break;
        }
    }
    for(i=0;i<s.size();i++){
        if(mid[i]<t[i]){
            cnt=1;
            break;
        }
        else if(mid[i]>t[i]){
            cnt=0;
            break;
        }
    }
    if(cnt==0)cout<<"No such string"<<endl;
    else cout<<mid<<endl;
    return 0;
}