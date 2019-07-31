#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,f,a,i,j,k;
	cin>>t;
	while (t--){
		cin>>a;
		cin>>f;
		for (i=0;i<f;i++){
			for(j=1;j<=a;j++){
				for(k=0;k<j;k++){
					cout<<j;
				}
				cout<<"\n";
			}
			for(j=a-1;j>=1;j--){
				for(k=0;k<j;k++){
					cout<<j;
				}
				cout<<"\n";
			}
			if(i!=f-1)
				cout<<"\n";
		}
		if (t)
			cout<<"\n";
	}
	return 0;
}