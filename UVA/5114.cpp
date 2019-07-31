#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,i;
        cin>>n>>k;
        long long h[20020],mini;
        for(i=0;i<n;i++){
            cin>>h[i];
        }
        sort(h,h+n);
        mini=1000000000;
        for(i=0;i<n-k+1;i++){
            if((h[i+k-1]-h[i])<mini)mini=(h[i+k-1]-h[i]);
        }
        cout<<mini<<endl;
    }
    return 0;
}
