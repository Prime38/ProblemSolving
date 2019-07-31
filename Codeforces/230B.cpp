#include<bits/stdc++.h>
using namespace std;
int status[1100002];
vector <long long> prime;
void sive()
{
    int N=1000000;
    int sq=sqrt(N);
    prime.push_back(2);
    for(int i=4;i<=N;i+=2) status[i]=1;
    for(int i=3;i<=sq;i+=2){
        if(status[i]==0){
            for(int j=i*i;j<=N;j+=i) status[j]=1;
        }
    }
    status[1]=1;
}
int main()
{
    long long n;
    cin>>n;
    sive();
    while(n--){
        long long a;
        cin>>a;
        int cnt=0;
        double sq=sqrt(a);
        if(sq==(int)sq){
            int p=(int)sq;
            if(status[p]==0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}