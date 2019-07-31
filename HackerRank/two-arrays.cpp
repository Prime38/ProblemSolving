#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--){
        int n,k,i,flag=0;
        cin>>n>>k;
        vector<int> a(n);
        vector<int> b(n);
        for(i=0;i<n;i++)cin>>a[i];
        for(i=0;i<n;i++)cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<int>());
        for(i=0;i<n;i++){
            if(a[i]+b[i]<k){flag++;break;}
        }
        if(flag==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}