#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,z=0,f=0;
    cin>>n;
    while(n--){
        cin>>a;
        if(a==0)z++;
        else f++;
    }
    if(z==0){cout<<-1<<endl;return 0;}
    if(f<9)cout<<0<<endl;
    else {
        f-=(f%9);
        while(f--){
            cout<<5;
        }
        while(z--){
            cout<<0;
        }
    }
    return 0;
}
