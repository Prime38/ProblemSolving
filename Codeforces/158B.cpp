#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,a[100000],a2=0,a3=0,a1=0,a4=0,cnt;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]==1) a1++;
        else if(a[i]==2) a2++;
        else if(a[i]==3) a3++;
        else if(a[i]==4) a4++;
    }
    cnt=a4+a3;
    if(a3>=a1) a1=0;
    else if(a3<a1) a1=a1-a3;
    cnt=cnt+(a2/2);a2=a2%2;
    if(a1>=0&&a1<=2&&a2==1){
        cnt++;a1=0;a2=0;
    }
    if(a1>=2&&a2==1) {
        cnt++;a2=0;a1=a1-2;
    }
    if(a1>=4){
        cnt=cnt+(a1/4); a1=a1%4;
    }
    if(a1<4&&a1>0) {
        cnt++; a1=0;
    }
    cout<<cnt;
    return 0;
}