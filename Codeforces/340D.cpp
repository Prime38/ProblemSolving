#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    set<int> st;
    set<int>::iterator it;
    st.clear();
    for(int i=0; i<n; i++) {
        it = st.lower_bound(a[i]);
        if (it != st.end()) st.erase(it);
        st.insert(a[i]);
        }
    cout<<st.size()<<endl;
}