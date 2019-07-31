#include<bits/stdc++.h>
using namespace  std;
int main()
{
    long long n,ma,p;
    cin>>n;
    priority_queue<long long> pq;
    ma=n;
    for(int i=0;i<n;i++){
        cin>>p;
        pq.push(p);
        if(pq.top()==ma){
            while(!pq.empty()&&pq.top()==ma){
                cout<<pq.top()<<" ";
                pq.pop();
                ma--;
            }
            cout<<endl;
        }
        else cout<<endl;
    }
    return 0;
}