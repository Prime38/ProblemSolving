#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a25=0,a50=0,a100=0,a[100100];
    cin>>n;
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    for(long long i=0;i<n;i++){
        if(a[i]==25)a25++;
        else if(a[i]==50){a50++;
            if(a25>0)a25--;
            else{cout<<"NO"<<endl;return 0;}
        }
        else {
            a100++;
            if(a25>0&&a50>0){
                a25--;a50--;
            }
            else if(a25>=3){a25-=3;}
            else {cout<<"NO"<<endl;return 0;}
        }
    }
    cout<<"YES"<<endl;
    return 0;
}