#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,lines;
        double total=0;
        map<char,int> m;
        scanf("%d",&n);
        while(n--){
        getchar();
            char a; int p;
            scanf("%c %d",&a,&p);
            m[a]=p;
        }
        scanf("%d",&lines);
        getchar();
        string s;
        while(lines--){

            getline(cin,s);
            int ss=s.size();
            for(int i=0;i<ss;i++){
                total+=m[s[i]];
            }
        }
        printf("%.2lf$\n",total/100);
        m.clear();
    }
    return 0;
}