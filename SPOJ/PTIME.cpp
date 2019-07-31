#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,cnt;
    cin>>n;
    int a[10010];
    memset(a,0,sizeof(a));
    for(i=2; i<=n; i++)
    {
        int c=i;
        for(j=2; c>1; j++)
        {
            while(c%j==0)
            {
                c/=j;
                a[j]++;
            }
        }
    }
    cnt=0;
    for(i=2; i<=n; i++)
    {
        if(a[i]>0)
        {
            cnt++;
            if (cnt==1)cout<<i<<"^"<<a[i];
            else cout<<" * "<<i<<"^"<<a[i];
        }
    }
    return 0;
}