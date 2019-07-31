#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,i,flag[110];
    string a;
    cin>>n;
    cin>>a;
    for(i=0;i<n;i++){
        if(a[i]=='B'){
            cnt++;flag[cnt]=1;
            while(a[++i]=='B'){
                flag[cnt]++;
            }
        }
    }
    cout<<cnt<<endl;
    for(i=1;i<=cnt;i++){
        cout<<flag[i]<<" ";
    }
    return 0;
}
