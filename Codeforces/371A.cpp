#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k,ans=0,j,p,two=0,one=0,temp;
    cin>>n>>k;
    vector<int> a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)one++;
        else two++;

    }
    ans=min(one,two);
    /*for(p=0;p<n;p+=k){
        vector<int> sa(k);
        for(i=0;i<k;i++){
            sa[i]=a[p+i];
            cout<<sa[i]<<" ";
        }
        cout<<endl;
        temp=0;
        for(i=0;i<n;i+=k){
            for(j=0;j<k;j++){
                if(a[i+j]!=sa[j])temp++;
            }
        }
        cout<<temp<<endl;
        ans=min(ans,temp);
    }*/
    ans=0;
    for(i=0;i<k;i++){
        one=0;two=0;
        for(j=0;j<n/k;j++){
            if(a[i+k*j]==1)one++;
            else two++;
        }
        //cout<<one<<" "<<two<<endl;
        temp=min(one,two);
        //cout<<temp<<endl;
        ans+=temp;
    }
    cout<<ans<<endl;
}