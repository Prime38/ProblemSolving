
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[10],i;
    set<int> s;
    set<int> ::iterator it;
    for(i=0;i<6;i++){
        cin>>ar[i];
        s.insert(ar[i]);
    }
    sort(ar,ar+6);
    if(s.size()==3){
        int p[3],j=0;
        for(it=s.begin();it!=s.end();it++){
            p[j]=0;
            for(i=0;i<6;i++){
                if(ar[i]==(*it))p[j]++;
            }
            j++;
        }
        sort(p,p+3);
        if(p[2]==4)cout<<"Bear"<<endl;
        else cout<<"Alien"<<endl;
    }
    else if(s.size()==2){
        int p=0;it=s.begin();
        for(i=0;i<6;i++){
            if(ar[i]==(*it))p++;
        }
        if(p==1||p==5)cout<<"Bear"<<endl;
        else if(p==2||p==4)cout<<"Elephant"<<endl;
        else cout<<"Alien"<<endl;
    }
    else if(s.size()==1)cout<<"Elephant"<<endl;
    else cout<<"Alien"<<endl;
    return 0;
}