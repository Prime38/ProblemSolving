#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,temp=0;
    cin>>n>>m;
    int cnt[n];
    string s;
    cin>>s;
    memset(cnt,0,sizeof(cnt));
    for(i=0;i<n;i++){
        if(s[i]=='.')cnt[i]=1;
    }
    for(i=0;i<n-1;i++){
        if(s[i]=='.'&&s[i+1]=='.')temp++;
    }
    //cout<<temp<<endl;
    while(m--){
        int pos;
        char ch;
        cin>>pos>>ch;pos--;
        if(cnt[pos]==1){
            if(ch!='.'){
                if(cnt[pos-1]==1)temp--;
                if(cnt[pos+1]==1)temp--;
                cnt[pos]=0;
            }
        }
        else{
            if(ch=='.'){
                if(cnt[pos-1]==1)temp++;
                if(cnt[pos+1]==1)temp++;
                cnt[pos]=1;
            }
        }
        cout<<temp<<endl;
    }
    return 0;
}