#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,j,total=0,cnt=0,p,w1,w2,dif,a[110];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
        total+=a[i];
    }
    sort(a,a+n,greater<int>());
    w1=0;w2=total-w1;dif=w2-w1;
    /*for(i=0;i<n;i++){
        cout<<a[i]<<endl;
    }*/
    for(i=0;i<n;i++){
        if(dif>0){
            w1+=a[i];
            w2=total-w1;
            dif=w2-w1;
            cnt++;
        }
    }
    if(w1>w2)cout<<cnt<<endl;
    else if(w1<=w2)cout<<cnt+1<<endl;
    return 0;

}
