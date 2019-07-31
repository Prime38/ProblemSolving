#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,n,cnt,ans,p,o,flag;
    while((scanf("%lld %lld",&i,&j))==2){
        if(i==0&&j==0) break;
        ans=0; flag=0;
        if(i>j){ o=i; i=j;j=o;flag=1; }
        for(n=i;n<=j;n++){
            cnt=1;
            p=n;
            while(p>1){
                cnt++;
                if(p%2==0) p/=2;
                else p=(3*p+1);
            }
            if (cnt>=ans)ans=cnt;
        }
        if(flag==0)cout<<i<<" "<<j<<" "<<ans<<endl;
        else cout<<j<<" "<<i<<" "<<ans<<endl;
    }
    return 0;
}
