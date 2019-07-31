#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n,ca;
    while(cin>>m>>n)
    {
        if(m==0&&n==0)
        {
            break;
        }
        long long a[20],b[20],i,j,p,q;
        ca=0;
        if(n>m)
        {
            long long o=m;
            m=n;
            n=o;
        }
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        for(i=0; m>0; i++)
        {
            a[i]=m%10;
            m/=10;
        }
        for(j=0; n>0; j++)
        {
            b[j]=n%10;
            n/=10;
        }
        for(p=0; p<i; p++)
            if(a[p]+b[p]>9)
            {
                ca++;
                b[p+1]++;
            }

        if (ca==0)cout<<"No carry operation."<<endl;
        else if (ca==1)cout<<"1 carry operation."<<endl;
        else cout<<ca<<" carry operations."<<endl;
    }

    return 0;
}
