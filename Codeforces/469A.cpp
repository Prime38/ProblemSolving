#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,a[210],j,i,p,q;
    vector<int> b;
    cin>>n;
    cin>>p;
    for(i=0;i<p;i++){
        cin>>a[i];
    }
    cin>>q;
    for(i=p;i<p+q;i++){
        cin>>a[i];
    }
    sort(a,a+p+q);
    for(i=0;i<p+q;i++){
        if(a[i]!=a[i+1]){
            b.push_back(a[i]);
        }
    }
    if(n==b.size()) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;

    return 0;
}