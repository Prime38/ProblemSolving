#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,j,i;
        cin>>n;
        int a[n+5];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        long long ans=-150000,dif=-150000;
        for(i=0;i<n-1;i++){
           if(a[i]>=ans)ans=a[i];
           if ((ans-a[i+1])>dif)dif=ans-a[i+1];
        }
        cout<<dif<<endl;
    }
    return 0;
}