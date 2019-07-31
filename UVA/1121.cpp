#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long s;
    int n;
    while(cin>>n>>s){
        int a[n+5];
        long long cnt=100000,flag=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            long long ma=0,k=0;
            for(int j=i;j<n;j++){
                k+=a[j];
                ma++;
                if(k>=s){flag++;break;}
            }
            if(k>=s)cnt=min(cnt,ma);
        }
        if (flag>0)cout<<cnt<<endl;
        else cout<<0<<endl;
    }
    return 0;
}