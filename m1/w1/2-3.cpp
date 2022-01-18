#include <bits/stdc++.h>
// by dp 
using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n, m;

int dp[100100][100100];

ll mod = 1e9+7;

ll rec( ll a, ll b)
{
	if(a==n && b == m)
		return 1;
	if( a>=n || b>=m  ) return 0;

	if(dp[a][b] != -1) return dp[a][b];

	ll ans = 0;
	ans = (ans+(rec(a+1,b) + rec(a,b+1))%mod)%mod;
	 return dp[a][b] = ans%mod;

}

void solve()
{
	cin>>n>>m;

    for (int i = 0; i <=n; ++i)
    {
    	for (int j = 0; j <=m; ++j)
    	{
    		dp[i][j]  = -1;
    	}
    }
    
    cout<<rec(0,0)<<endl;

}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}