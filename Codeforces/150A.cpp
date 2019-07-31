#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,sq,i,c,div[5];
    int flag=0;
    div[0]=0;div[1]=0;
    cin>>n;
    c=n;
    sq=sqrt(n);
    for(i=2;i<=sq;i++){
        while(n%i==0){
            div[flag]=i;
            n/=i;
            if(flag==2) break;
            flag++;
        }
        if(flag==2) break;
    }

    if(flag==2&&(div[0]*div[1])<c) cout<<1<<endl<<div[0]*div[1]<<endl;
    else if(flag==0) cout<<1<<endl<<0<<endl;
    else cout<<2<<endl;
    return 0;
}
