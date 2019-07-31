#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        if(n==0)break;
        int i;
        queue<int> main,dis;
        for(i=1;i<=n;i++){
            main.push(i);
        }
        while(main.size()!=1){
            dis.push(main.front());
            main.pop();
            main.push(main.front());
            main.pop();
        }
        cout<<"Discarded cards:";
        while(!dis.empty()){
            if(dis.size()>1)
            cout<<" "<<dis.front()<<",";
            else cout<<" "<<dis.front();
            dis.pop();
        }
        cout<<endl<<"Remaining card: "<<main.front()<<endl;
    }
    return 0;
}