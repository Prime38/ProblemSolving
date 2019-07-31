#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n+5];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        int key=a[i];
        j=i-1;
        while(j>=0&&a[j]>key){
            a[j+1]=a[j];
            j--;
            a[j+1]=key;
        }
        for(int k=0;k<n;k++){
        cout<<a[k];
        if(k==n-1)cout<<endl;
        else cout<<" ";
        }
    }
    return 0;
}