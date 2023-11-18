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
     cin>>n;
     string s;
     cin>>s;
     map<char, int>m;
     int cnt=1;
     int ans=0;
     for(int i=1;i<n;i++)
     {
         //while(i+1<n && s[i]==s[i+1])
         if(s[i]==s[i-1])
         {
             cnt++;
             m[s[i]]=max(m[s[i]], cnt);
         }
         else
         {
             cnt=1;
             m[s[i]]=max(m[s[i]], cnt);
         }
     }
     for(auto it:m)
     {
         ans+=it.second;
     }

     ans=max(ans, (int)1);

     cout<<ans<<endl;
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

