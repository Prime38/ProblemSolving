#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,j,temp=0,i;
		cin>>n;
		int a[n+10];
		for(int i=0;i<n;i++){
            cin>>a[i];
		}
		for(i=0;i<n;i++){
			for(j=i+2;j<n;j++){
				if (a[i]>a[j]){temp=1;
					cout<<"NO"<<endl; break;
				}
			}
			if (temp==1) break;
		}
		if (temp==1) continue;
		cout<<"YES"<<endl;
	}
	return 0;
}