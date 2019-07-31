#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int len=s.length();
        if(len==1){
            cout<<-1<<endl;
        }
        else{
            int temp=0;
            for(int i=0;i<len-1;i++){
                if(s[i]!=s[i+1]){
                    temp=1;
                    break;
                }
            }
            if(temp==0){
                cout<<-1<<endl;
            }
            else{
                bool isPal=true;
                for(int i=0;i<len/2;i++){
                    if(s[i]!=s[len-1-i]){
                        isPal=false;
                        break;
                    }
                }
                if(isPal){
                    for(int i=0;i<len/2;i++){
                        if(s[i]!=s[i+1]){
                            swap(s[i],s[i+1]);
                            cout<<s<<endl;
                            break;
                        }
                    }
 
                }
                else{
                    cout<<s<<endl;
                }
 
            }
        }
    }
}