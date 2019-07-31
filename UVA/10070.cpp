#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long y;
    int flag,cnt;
    while(cin>>y){
        flag=0;cnt=0;
        if(y%400==0||(y%4==0&&y%100!=0)){
            cout<<"This is leap year."<<endl;
            cnt++;
            if(y%55==0){flag++; cnt++;}
        }
        if(y%15==0){
            cout<<"This is huluculu festival year."<<endl;
            cnt++;
        }
        if(flag==1)cout<<"This is bulukulu festival year."<<endl;
        if(cnt==0){
            cout<<"This is an ordinary year."<<endl;
        }
    }
    return 0;
}
