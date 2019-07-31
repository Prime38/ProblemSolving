#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,p,i,j;
        cin>>n>>p;
        short int a[n+5];
        for(i=1;i<=n;i++){
            if((i%7==0)||(i%7==6))a[i]=1;
            else a[i]=0;
        }
        int h,total=0,flag;
        for(j=0;j<p;j++){
            cin>>h;
            for(i=h;i<=n;i+=h){
                if(a[i]==0){a[i]=1;total++;}
            }
        }
        cout<<total<<endl;
    }
    return 0;
}