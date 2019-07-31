#include<bits/stdc++.h>
using namespace std;
short int use[201010];
int alph[30];
int main()
{
    int n,i,j,cnt=0,s;
    cin>>n;
    string a;
    cin>>a;
    s=a.size();

    for(i=0;i<s;i++){
        if(a[i]>='a'&&a[i]<='z'){
            alph[a[i]-'a']++;
        }
        else{
            char c=tolower(a[i]);
            if(alph[c-'a']>0)alph[c-'a']--;
            else cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}