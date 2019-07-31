#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%7){
            cout<<(n/7)+1<<endl;
        }
        else cout<<n/7<<endl;
    }
}