#include <bits/stdc++.h>
using namespace std;
long long p[200005], n, m, ans;
vector<long long> v[200005];
void dfs(int st, int pk, int k)
{
    if (k > m)
        return;
    int flag = 1;
    for (int i = 0; i < v[st].size(); i++)
    {
        if (v[st][i] != pk)
        {
            flag = 0;
            dfs(v[st][i], st, k * p[v[st][i]] + p[v[st][i]]);
        }
    }
    ans += flag;
}
int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 1; i < n; i++)
    {
        int n1, n2;
        cin >> n1 >> n2;
        n1--;
        n2--;
        v[n1].push_back(n2);
        v[n2].push_back(n1);
    }
    dfs(0, -1, p[0]);
    cout << ans << endl;
    return 0;
}