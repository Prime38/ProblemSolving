#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,total=0,div,h1=0,cnt=0;
    cin>>n;
    vector<int> v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
        total+=v[i];
    }
    int h2=total;
    if(total%2==1){cout<<0<<endl;return 0;}
    for(i=0;i<n-1;i++){
        h1+=v[i];
        h2-=v[i];
        if(h1==h2)cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}