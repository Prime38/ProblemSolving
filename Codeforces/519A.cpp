#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[10][10];
    int i,j,w=0,b=0;
    for(i=0;i<8;i++){
        cin>>a[i];
        for(j=0;j<8;j++){
            if(a[i][j]=='Q') w=w+9;
            else if(a[i][j]=='R') w=w+5;
            else if(a[i][j]=='B') w=w+3;
            else if(a[i][j]=='N') w=w+3;
            else if(a[i][j]=='P') w=w+1;
            else if(a[i][j]=='q') b=b+9;
            else if(a[i][j]=='r') b=b+5;
            else if(a[i][j]=='b') b=b+3;
            else if(a[i][j]=='n') b=b+3;
            else if(a[i][j]=='p') b=b+1;

        }
    }
    if(w==b) cout<<"Draw";
    else if(w>b)cout<<"White";
    else cout<<"Black";
    return 0;
}