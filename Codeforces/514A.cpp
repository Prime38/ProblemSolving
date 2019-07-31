#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n;
    int a[30],i,j,temp;
    cin>>n;
    for(i=0;n>0;i++){
        a[i]=n%10;
        n=n/10;
    }
    for(j=i-1;j>=0;j--){
        if(a[j]>4){
        if(j==i-1&&a[j]==9)a[j]=a[j];
        else a[j]=9-a[j];}
        cout<<a[j];
    }
    return 0;

}