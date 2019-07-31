#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int a[5],i;
    for(i=0;i<3;i++){
        cin>>a[i];
    }
    sort(a,a+3);
    cout<<a[2]-a[0];
    return 0;
}
