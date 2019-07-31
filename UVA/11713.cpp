#include<bits/stdc++.h>
using namespace std;
bool isconsonent(char a)
{
    if(a=='a' || a=='e' || a=='i'||a=='o'||a== 'u' ) return false;
    else return true;
}
int main()
{
    int n,i,j,flag,sa,sb;
    cin>>n;
    while(n--){
        string a,b;
        cin>>a>>b;
        sa=a.size();
        sb=b.size();flag=1;
        if(sa!=sb){cout<<"No"<<endl;continue;}
        for(i=0;i<sa;i++){
            if(isconsonent(a[i])||isconsonent(b[i])){
                if(a[i]!=b[i]){
                    flag=0;break;
                }
            }
        }
        if(flag==0)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    return 0;
}