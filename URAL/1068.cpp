#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0;
    cin>>n;
    if(n>=1){
        for(i=1;i<=n;i++){
            sum=sum+i;
        }
    }
    else{
        for(i=n;i<=1;i++){
            sum=sum+i;
        }
    }
    cout<<sum<<endl;
    return 0;
}