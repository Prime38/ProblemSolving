#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100],i,flag=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int x=0;
    for(i=0;i<n;i++){
        if((a[i]-x)>15){
            if(x+15>90)cout<<"90"<<endl;
            else cout<<x+15<<endl;

            flag=1;
            break;
        }
        x=a[i];

    }
    if(flag==0){
		if(x+15>90)
			cout<<"90";
		else
		cout<<x+15;
	}

    return 0;
}
