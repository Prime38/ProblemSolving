#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,total;
    cin>>a>>b>>c>>d>>e;
    total=a+b+c+d+e;
    if(total==0)cout<<-1<<endl;
    else if(total%5!=0) cout<<-1<<endl;
    else cout<<total/5<<endl;
    return 0;
}
