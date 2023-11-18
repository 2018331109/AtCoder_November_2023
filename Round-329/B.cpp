#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
int mod = 1e9 + 7;
int md = 998244353;

const int INF = 1e18;

void solve()
{
    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }

    int k = m.size();
    if (k < 2)
    {
        cout << -1 << endl; // Handle the case when there are less than 2 distinct elements
        return;
    }

    auto it = m.begin();
    advance(it, k - 2); // Move the iterator to the (k-2)-th element
    cout << it->first << endl;
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

