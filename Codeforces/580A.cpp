#include<bits/stdc++.h>
using namespace std;
long long a[100100],cnt[10010];
int main()
{
    long long n,k=0,i;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a[i];
    }
    for(i=1;i<=n;i++){
        cnt[k]=1;
        while(a[i]<=a[i+1]){
            cnt[k]++;
            i++;
        }
        k++;
    }
    sort(cnt,cnt+k);
    cout<<cnt[k-1];
    return 0;
}
