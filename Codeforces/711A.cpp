#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,flag=0;
    cin>>n;
    string s[n+5];
    for(i=0; i<n; i++)
    {
        cin>>s[i];
        if(((s[i][0]=='O'&&s[i][1]=='O')||(s[i][3]=='O'&&s[i][4]=='O'))&&flag==0)
        {
            flag++;
            if (s[i][0]=='O'&&s[i][1]=='O')
            {
                s[i][0]='+';
                s[i][1]='+';
            }
            else
            {
                s[i][3]='+';
                s[i][4]='+';
            }
        }
    }
    if(flag==0)cout<<"NO"<<endl;
    else if(flag>0)
    {
        cout<<"YES"<<endl;
        for(i=0; i<n; i++)
        {
            cout<<s[i]<<endl;
        }
    }
    return 0;
}