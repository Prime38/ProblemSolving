#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    while(cin>>n>>m){
        if(n==0&&m==0)break;
        long long dm=0,cost=0,i,j;
        long long dr[20010],kn[20010];
        for(i=0;i<n;i++){
            cin>>dr[i];
        }
        for(i=0;i<m;i++){
            cin>>kn[i];
        }
        sort(dr,dr+n);
        sort(kn,kn+m);
        bool ch=true;
        if(m<n){cout<<"Loowater is doomed!"<<endl;continue;}
        for(i=0,j=0;i<n;i++){
            while(j<m&&kn[j]<dr[i])j++;
            if(j==m)ch=false;
            cost+=kn[j++];
        }
        if(ch==true)cout<<cost<<endl;
        else cout<<"Loowater is doomed!"<<endl;
    }
    return 0;
}