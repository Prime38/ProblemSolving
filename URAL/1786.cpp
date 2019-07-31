#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string a,s="Sandro";
    int i,j,mini=60;
    getline(cin,a);
    for(i=0;i<=a.size()-s.size();i++){
        int cost=0;
        for (int j = 0; j < s.size(); j++) {
            if (isupper(a[i+j]) != isupper(s[j])) cost += 5;
			if (tolower(a[i+j]) != tolower(s[j])) cost += 5;
		}
        if(mini>cost) mini=cost;
    }
    cout<<mini<<endl;
    return 0;

}