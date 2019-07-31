#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int flag=0,n=s.size(),cnt[30],q,st,i,j;
    if(n<26){cout<<-1<<endl;return 0;}
    for(i=0;i<n-25;i++){
        string a(s.begin()+i,s.begin()+i+26);
        memset(cnt,0,sizeof cnt);
        flag=0;
        for(j=0;j<26;j++){
            if(a[j]!='?'){
                if(cnt[a[j]-'A']==0)cnt[a[j]-'A']++;
                else {flag++;break;}
            }
        }
        if(flag==0){st=i;break;}
    }
    if(flag>0)cout<<-1<<endl;
        else {
            for(i=0;i<st;i++){
                if(s[i]=='?')s[i]='A';
                cout<<s[i];
            }
            for(i=st;i<=st+25;i++){
                if(s[i]=='?'){
                    for(char k='A';k<='Z';k++){
                        if(cnt[k-'A']==0){
                            cnt[k-'A']++;
                            s[i]=k;
                            break;
                        }
                    }
                }
                cout<<s[i];
            }
            for(;i<n;i++){
                if(s[i]=='?')s[i]='A';
                cout<<s[i];}
        }
        cout<<endl;
    return 0;
}