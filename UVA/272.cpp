#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    bool ax=1;
    while(scanf("%c",&c)){
        if(c=='"'){
            if(ax)cout<<"``";
            else cout<<"''";
            ax=(!ax);
        }
        else cout<<c;
    }
    return 0;
}
