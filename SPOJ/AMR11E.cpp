#include<bits/stdc++.h>
using namespace std;
long long lucky[1010];
short int status[11000];
vector<long long >  prime;
void siv()
{
	long long N=10000;
	long long sq=sqrt(N);
	for(long long i=4;i<=N;i+=2) status[i]=1;
	for(long long i=3;i<=sq;i+=2){
		if(status[i]==0)
		{
			for(long long j=i*i;j<=N;j+=i) status[j]=1;
		}
	}
	status[1]=1;
	for(long long i=2;i<=N;i++){
        if(status[i]==0)prime.push_back(i);
	}

}
void ln()
{
    long long i,j,cnt=0,k;
    for(i=30;cnt<=1000;i++){
        long long temp,c=i,flag=0;
        if(status[i]==0)continue;
        for(j=0,temp=0; prime[j]<=i;j++){
            if(c%prime[j]==0){
                temp++;
                while(c%prime[j]==0){
                    c/=prime[j];
                }
            }
            if(temp==3){
                    flag=1;
                    break;
            }
        }
        if(flag==1){
            cnt++;
            lucky[cnt]=i;
        }
    }

}
int main()
{
    long long t,n;
    cin>>t;
    siv();
    ln();
    while(t--)
    {
        cin>>n;
        cout<<lucky[n]<<endl;
    }
    return 0;
}