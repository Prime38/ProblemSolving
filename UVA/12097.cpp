#include<bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,f;
        cin>>n>>f;
        double r[10010];
        for(int i=0; i<n; i++)
        {
            cin>>r[i];
            r[i]=r[i]*r[i]*pi;
        }
        sort(r,r+n);
        double hi=r[n-1],low=0.0,mid;
        while(hi-low>1e-5)
        {
            mid=(hi+low)/2.0;
            int flag=0;
            for(int i=0; i<n; i++)
            {
                flag+=(int)(r[i]/mid);
            }
            if(flag>f)low=mid;
            else hi=mid;
        }
        printf("%.5lf\n",low);
    }
    return 0;
}