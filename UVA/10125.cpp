#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        if(n==0)break;
        int s[1005],i,ma,flag=0,j;
        for(i=0;i<n;++i){
            cin>>s[i];
        }
        sort(s,s+n);
        for(i=n-1;i>=0;--i){
            int d,c,sum;
            for(j=0;j<n;++j){
                if(i==j)continue;
                d=i;c=j;
                int a=0,b=n-1;
                while(a==c||a==d)++a;
                while(b==c||b==d)--b;
                while(a<b){
                    sum=s[d]-(s[c]+s[a]+s[b]);
                    if(sum==0){
                        ma=s[d];
                        flag++;
                        break;
                    }
                    else if(sum>0){
                        a++;
                        while(a==d||a==c)++a;
                    }
                    else{
                        b--;
                        while(b==d||b==c)--b;
                    }
                }
                if(flag>0){break;}
            }
            if(flag>0)break;
        }
        if(flag>0)cout<<ma<<endl;
        else cout<<"no solution"<<endl;
    }
    return 0;
}