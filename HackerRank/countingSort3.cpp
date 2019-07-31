#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    string s;
    for(int i=0;i<n;i++){
        cin>>a[i];
        cin>>s;
    }
    sort(a.begin(),a.end());
    for(int i=0;i<100;i++){
        cout<<upper_bound(a.begin(),a.end(),i)-a.begin()<<" ";
    }
    cout<<endl;
    return 0;
}