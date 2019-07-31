#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r1,r2,c1,c2,d1,d2,x1,x2,y1,y2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    x1=(d1+r1-c2)/2;
    x2=(c1+r2-d1)/2;
    y1=(c2+d2-r2)/2;
    y2=(d1+r2-c1)/2;

    if(x1+y1==r1&&x2+y2==r2&&x1+x2==c1&&y1+y2==c2&&x1+y2==d1&&x2+y1==d2){
        if(x1==x2||x2==y1||x2==y2||x1==y1||x1==y2||y1==y2)
            cout<<"-1"<<endl;
        else if(x1>9||x2>9||y1>9||y2>9||x1<1||x2<1||y1<1||y2<1)
            cout<<"-1"<<endl;
        else
            cout<<x1<<" "<<y1<<"\n"<<x2<<" "<<y2<<endl;
    }
    else cout<<"-1"<<endl;
    return 0;
}
