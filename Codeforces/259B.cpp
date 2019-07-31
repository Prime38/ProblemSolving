#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a11,a12,a13,a21,a22,a23,a31,a32,a33,avg1,avg2;
    cin>>a11>>a12>>a13>>a21>>a22>>a23>>a31>>a32>>a33;
    avg1=(a12+a32)/2;
    avg2=(a21+a23)/2;
    if(avg1==avg2){
        a22=avg1;
        int sum=a21+a22+a23;
        a11=sum-a12-a13;
        a33=sum-a31-a32;
    }
    cout<<a11<<" "<<a12<<" "<<a13<<endl;
    cout<<a21<<" "<<a22<<" "<<a23<<endl;
    cout<<a31<<" "<<a32<<" "<<a33<<endl;
    return 0;
}