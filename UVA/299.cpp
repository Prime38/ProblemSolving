#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,l,a[100],i,j,cnt;
    cin>>t;
    while(t--){
        cin>>l;
        for(i=1;i<=l;i++){
            cin>>a[i];
        }
        cnt=0;
        for(i=1;i<=l;i++){
            for(j=1;j<l;j++){
                if(a[j]>a[j+1]){
                    swap(a[j],a[j+1]);
                    cnt++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<cnt<<" swaps."<<endl;
    }

    return 0;
}