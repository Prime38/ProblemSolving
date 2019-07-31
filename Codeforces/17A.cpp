#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int p[1010]={3,5};
    int count(2);
    for(int num=7;num<=n&&k!=0;num+=2){
        int i=0;
        while(i<count&&(num%p[i]!=0)){
            ++i;
        }
        if(i==count){
            for(int j=1;j<count;++j){
                if(p[j]+p[j-1]+1==num){
                    k -= 1;
                    break;
                }
            }
            p[count++]=num;
        }
    }
    if(k==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}