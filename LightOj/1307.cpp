#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    for(k=1;k<=t;k++){
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int total=0,i,j;
        sort(v.begin(),v.end());
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                int c=v[i]+v[j];
                int ind=lower_bound(v.begin(),v.end(),c)-v.begin();
                total+=max(0,ind-j-1);
            }
        }
        cout<<"Case "<<k<<": "<<total<<endl;
    }
    return 0;
}