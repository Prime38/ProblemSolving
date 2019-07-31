#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    while(cin>>n){
        int ans=0,i;
        for( i=0;i<n;i++){
            if(n>=pow(2,i))ans++;
            else break;
        }
        cout<<ans<<endl;
    }
    return 0;
}