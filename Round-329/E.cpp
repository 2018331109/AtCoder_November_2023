#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<set<int>> st(n + 1);

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        st[i].insert(x);
    }

    for (int i = 1; i <= m; i++)
    {
        int a, b;
        cin >> a >> b;

        if (st[a].size() > st[b].size())
        {
            swap(st[a], st[b]);
        }

        for (auto &it : st[a])
        {
            st[b].insert(it);
        }

        cout << st[b].size() << endl;
        st[a].clear();
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    // cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

