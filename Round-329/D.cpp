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
    int k;
    cin>>k;
    cin>>n;
    map<int, int>m;
    int cnt=0;
    int ans=0;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        m[x]++;
        if(cnt<m[x])
        {
            cnt=m[x];
            ans=x;
        }
        else if(cnt==m[x])
        {
            ans=min(ans, x);
        }
        cout<<ans<<endl;
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

