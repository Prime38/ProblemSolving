#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,n,i,a[1110];
    float total,avg,cnt,p;
    cin>>c;
    while(c--){
        total=0;cnt=0;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a[i];
            total+=a[i];
        }

        avg=total/n;
        for(i=0;i<n;i++){
            if(a[i]>avg)cnt++;
        }
        p=(cnt/n)*100;
        printf("%.3lf",p);
        cout<<"%\n";
    }
    return 0;
}
