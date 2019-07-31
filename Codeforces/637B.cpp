#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    vector<string> v(n),ans;
    int cnt[n];
    map<string,int> m;
    for(i=0;i<n;i++)
        cin>>v[i];
    cout<<endl;
    for(i=n-1;i>=0;i--){
        if(m[v[i]]==0){
            cout<<v[i]<<endl;
            m[v[i]]++;
        }
    }
    return 0;
}
