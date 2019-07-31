#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,n,d,i,sum;
    cin>>t;
    while(t--){
        sum=0;
        cin>>n>>a>>d;
        int p=a;
        sum+=p;
        for(i=1;i<n;i++){
            p+=d;
            sum+=p;
        }
        cout<<sum<<endl;
    }
    return 0;
}