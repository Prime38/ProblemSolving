#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,w,s1,s2,s3;
    cin>>n;
    short int t[n+5];
    vector<long long> v1,v2,v3;
    for(i=1;i<=n;i++){
        cin>>t[i];
        if(t[i]==1)v1.push_back(i);
        else if(t[i]==2)v2.push_back(i);
        else if (t[i]==3)v3.push_back(i);
    }
    if(v1.empty()||v2.empty()||v3.empty()){cout<<0<<endl; return 0;}
    int s[3];
    s[0]=v1.size();s[1]=v2.size();s[2]=v3.size();
    sort(s,s+3);
    w=s[0];
    cout<<w<<endl;
    for(i=0;i<w;i++){
        cout<<v1[i]<<" "<<v2[i]<< " "<<v3[i]<<endl;
    }
    return 0;
}
