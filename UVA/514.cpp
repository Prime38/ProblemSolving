#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        if(n==0)break;
        int a[1100],i,j,flag=1;
        while(cin>>a[0]){
            if(a[0]==0){cout<<endl;break;}
            for(i=1;i<n;i++){
                cin>>a[i];
            }
            int cc=1,ti=0;
            stack<int> station;
            while(cc<=n){
                station.push(cc);
                while(!station.empty()&&station.top()==a[ti]){
                    station.pop();
                    ti++;
                    if(ti>=n)break;
                }
                cc++;
            }
            if(station.empty())cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}