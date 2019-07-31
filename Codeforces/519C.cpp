#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,team=0;
    cin>>a>>b;
    while((a>=1&&b>=2)||(a>=2&&b>=1)){
        if(a>=b){
            team++;
            a-=2;b--;
        }
        else{b-=2;a--;team++;}
    }
    cout<<team<<endl;
    return 0;
}