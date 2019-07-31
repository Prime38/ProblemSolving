#include<bits/stdc++.h>
using namespace std;
int main()
{
    short int i,j,a;
    vector<short int> cnt(10);
    for(i=1;i<=6;i++){
        cin>>a;
        cnt[a]++;
    }
    for(i=1;i<=9;i++){
        cout<<i<<" :"<<cnt[i]<<endl;
    }
    return 0;
}
