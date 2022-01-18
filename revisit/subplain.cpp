#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

string s;

int dp[100100];

// base case reply lvl == zero with 0  

bool palin(ll l, ll r)
{
	// cout<<l<<r<<endl;
	if(l>=r) return 1;

	return s[l] == s[r] && palin(l+1,r-1);
}

ll rec( ll lvl)
{
	if(lvl <= 0)
	{
		return 0;
	}

	if(dp[lvl] != -1) return dp[lvl];

	ll ans = 1e9;
	for (int i = lvl-1; i >= 0; --i)
	{

		if( palin(i+1,lvl) )
		{
			// cout<<i+1<<lvl<<endl;
			ans = min( ans, rec(i)+1 );
		}
	}

	return dp[lvl] = ans;
}
void solve()
{
  cin>>s;
  n  = s.size();
  memset(dp,-1,sizeof(dp));
  cout<<rec(n-1)<<endl;
  cout<<dp[0]<<dp[1]<<dp[2]<<endl;
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}