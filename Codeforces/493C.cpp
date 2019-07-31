#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    map<int,int> a,b;
    set<int> s;
    set<int> :: iterator it;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        s.insert(p);
        a[p]++;
    }
    cin>>m;
    for(int i=0;i<m;i++){
        int p;
        cin>>p;
        s.insert(p);
        b[p]++;
    }
    long long as=n*3,bs= m*3;
    long long ma=as,mb= bs;
    for(auto &it:s){
        as=(as-a[it]*3+a[it]*2);
        bs=(bs-b[it]*3+b[it]*2);
        if(as-bs>ma-mb){
            ma=as;
            mb=bs;
        }
    }
    cout<<ma<<":"<<mb<<endl;
    return 0;
}