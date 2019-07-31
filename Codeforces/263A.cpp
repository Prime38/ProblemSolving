#include<bits/stdc++.h>
using namespace std;
int main(){
    int ans=0,p;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>p;
            if(p==1){
                if(i>2){
                    ans+=(i-2);
                }
                else if(i<2){
                    ans+=(2-i);
                }
                if(j>2){
                    ans+=(j-2);
                }
                else if(j<2){
                    ans+=(2-j);
                }
            }
        }
    }
    cout<<ans;
    return 0;
}