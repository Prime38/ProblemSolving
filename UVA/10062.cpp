#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int i,sz;

    while(cin>>a){
        sz=a.size();
        vector<int> cnt(260);
        for(i=0;i<sz;i++){
            cnt[a[i]]++;
        }
        vector<int> n[1000];
        for(i=0;i<256;i++){
            if(cnt[i]>0) n[cnt[i]].push_back(i);
        }
        for(i=0;i<sz;i++){
            int s=n[i].size(),j;
            for(j=s-1;j>=0;j--){
                cout<<n[i][j]<< " "<<i<<endl;
            }
        }
        cout<<endl;
    }
    return 0;
}
