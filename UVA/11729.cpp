#include<bits/stdc++.h>
using namespace std;
struct ne{
    int br, work;
}sol[10100];

bool compare(ne a,ne b)
{
    return a.work>b.work;
}

int main()
{
    int n,cas=1;
    while(cin>>n){
        if (n==0)break;
        int i,j,time=0,ans=0;
        for(int i=0;i<n;i++){
            cin>>sol[i].br>>sol[i].work;
        }

        sort(sol,sol+n,compare);
        for(i=0;i<n;i++){
            time+=sol[i].br;
            ans=max(ans,time+sol[i].work);
        }
        cout<<"Case "<<cas<<": "<<ans<<endl;
        cas++;
    }
    return 0;
}