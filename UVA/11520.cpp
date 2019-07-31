#include<bits/stdc++.h>
using namespace std;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
int main()
{
    int t,cas;
    cin>>t;
    for(cas=1;cas<=t;cas++){
        cout<<"Case "<<cas<<":"<<endl;
        int n;
        cin>>n;
        string s[12];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        for(int i=0; i<n;i++){
            for(int j=0;j<n;j++){
                if(s[i][j]=='.'){
                    for(char k='A';k<='Z';k++){
                        int flag=0;
                        for(int p=0;p<4;p++){
                            int x=i+dx[p];
                            int y=j+dy[p];
                            if(x>=0&&y>=0&&x<n&&y<n){
                                if(s[x][y]==k){flag++;break;}
                            }
                        }
                        if(flag==0){s[i][j]=k;break;}
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<s[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}