#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,temp=1,pk;
    char a[110],c;
    cin>>n;
    if(n<26){temp=0;}
    else{
        cin>>a;
        for(i=0;i<n;i++){
            if(a[i]>='A'&&a[i]<='Z') a[i]=a[i]+'a'-'A';
        }
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(a[i]>a[j])swap(a[i],a[j]);
            }
        }
    }
    for(c='a';c<='z';c++){
        pk=0;
        for(i=0;i<n;i++){
            if(c==a[i]) pk++;
        }
        if(pk==0){temp=0; break;}
    }
    if(temp==0)cout<<"NO";
    else cout<<"YES";
    return 0;
}