#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{    long long n,m,i,j,bi,bj,a[10100];
     while(cin>>n){
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        cin>>m;
        sort(a,a+i);
        i=0;j=n-1;
        while(i<j){
            if(a[i]+a[j]<m) i++;
            else if(a[i]+a[j]==m){
                bi=i;bj=j;
                i++;j--;
            }
            else j--;
        }
        cout << "Peter should buy books whose prices are " << a[bi] << " and " << a[bj] << ".\n\n";
    }
    return 0;

}