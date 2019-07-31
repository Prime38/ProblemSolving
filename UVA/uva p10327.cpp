#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1010],n,cnt,i,j;
    while(cin>>n){
        cnt=0;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            for(j=i;j<n;j++){
                if(a[i]>a[j]){
                    swap(a[i],a[j]);
                    cnt++;
                }
            }
        }
        cout<<"Minimum exchange operations : "<<cnt<<endl;
    }
    return 0;
}
