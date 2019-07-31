#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long t,n,k,i,j,nck,npk,p,kfact;
    cin>>t;
    for(int c=1;c<=t;c++){
        cin>>n>>k;
        if (k>n) cout<<"Case "<<c<<": "<<0<<endl;
        else {
            nck=1;npk=1;p=n-k+1;
            for(i=n,j=1;j<=k;j++,i--){
                nck*=i;nck/=j;
            }
            for(i=p;i<=n;i++){
                npk*=i;
            }
            cout<<"Case "<<c<<": "<<npk*nck<<endl;
        }
    }
    return 0;
}