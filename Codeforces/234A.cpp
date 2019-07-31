#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    int n;
    fin>>n;
    string s;
    fin>>s;
    for(int i=0;i<n/2;i++){
        char a=s[i];
        int p,q;
        if(a=='L'){p=i+1;q=i+n/2+1;}
        else { p=i+n/2+1;q=i+1;}
        fout<<p<<" "<<q<<endl;
    }
    return 0;
}