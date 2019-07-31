#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n1,n2,cnt=1;
        cin>>n1>>n2;
        for(int i=0;i<63;i++){
            if((n1|cnt)>n2)break;
            n1|=cnt;
            cnt<<=1;
        }
        cout<<n1<<endl;
    }
    return 0;
}