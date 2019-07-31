#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[120],cnt=0,total,avg,m;
    while(cin>>n){
        if(n<=0) break;
        cnt++;total=0; m=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            total+=a[i];
        }
        avg=total/n;
        for(int i=0;i<n;i++){
            if(a[i]>avg) m+=(a[i]-avg);
        }
        printf("Set #%d\n", cnt);
        printf("The minimum number of moves is %d.\n\n", m);
    }
    return 0;
}
