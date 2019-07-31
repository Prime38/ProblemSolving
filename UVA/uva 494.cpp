#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;int i,cnt,s,p;
    while(getline(cin,a)){
        s=a.size();
        a[s]=' ';
        p=0;cnt=0;
        for(i=0;i<=s;i++){
            while(a[i]!=' '){
                if(a[i]>='A'&&a[i]<='z') p=1;
                i++;
            }
            if(p==1){cnt++; p=0;}
        }
        cout<<cnt<<endl;
    }
    return 0;
}
