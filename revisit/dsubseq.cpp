#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;
ll mod = 1e9+7;
void solve()
{
	string s;
	cin>>s;
	ll n = s.size();

	ll sum[n+1], dp[n+1], last[26];

	memset(last,0 ,sizeof(last));
	
	sum[0] = 1; dp[0] = 1;
	
	for(int i = 1; i<= n ;i++)
	{
		dp[i]  = sum[i-1];
		if( last[s[i-1] - 'a'] > 0 )
		{
			dp[i] = sum[i-1]%mod - sum[last[s[i-1] - 'a'] - 1]%mod;
		}
		
		sum[i] = sum[i-1]+dp[i];

		last[s[i-1] - 'a'] = i;
	}
	for(auto i:sum)
	cout<<i<<endl;
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}