#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,first_odd,first_ev,total_odd,total_ev;
    total_ev=0;
    total_odd=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;
        if(m%2==0){
            total_ev++;
            if(total_ev==1){
                first_ev=i+1;
            }
        }
        else{
            total_odd++;
            if(total_odd==1)
                first_odd=i+1;
        }
    }
    if(total_ev==1)cout<<first_ev<<endl;
    else if(total_odd==1)cout<<first_odd<<endl;
    return 0;
}