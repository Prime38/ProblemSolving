#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n ;

    while(cin>>n)
    {
        int ara[n+1], swp = 0;

         for(int i = 0; i<n; i++)
        {cin>>ara[i];}

        for(int i = 0; i<n; i++)
        {
            int minn = i;

            for(int j = i; j<n; j++)
            {
                if(ara[j]<ara[minn])
                    minn = j;
            }

            if(minn!=i)
                {swap(ara[i],ara[minn]); swp++;}
        }

        for(int k = 0; k < n - 1; k++)
            printf("%d ",ara[k]);
        printf("%d\n",ara[n - 1]);
        printf("%d\n",swp);
        
    }return 0;
}