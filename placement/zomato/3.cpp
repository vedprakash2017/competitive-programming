#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll dp[1010][1010];

ll rec (ll i, ll j, vector<vector<ll>> arr)
{
	ll n = arr.size(); ll m = arr[0].size();
	
	if(i == n-1 && j == m-1) return arr[i][j];

	if( i >= n || j>= m) return +1e9;

	// if(i == n-1 && j == m-1) return arr[n-1][m-1];
	
	if(dp[i][j]!=-1)
		return dp[i][j];

	ll ans = 1e18;
	
	ll a = rec(i,j+1,arr);	
	ll b = rec(i+1,j,arr);
	ans = abs(a)>abs(b)?b:a; 
	ans += arr[i][j];
	return dp[i][j] = ans;

}

ll cal_min( vector< vector<ll>> arr )
{

	ll n = arr.size(); ll m = arr[0].size();
	for(ll i=0;i<n;i++)
		for(ll j=0;j<m;j++)
			dp[i][j] = -1;
	
	ll ans =  rec(0,0,arr);

	if(ans<=0)
		ans =abs(ans)+1;
	else
		ans = 1;
		for(ll i=0;i<n;i++)
		{
		for(ll j=0;j<m;j++)
			cout<<dp[i][j]<<" ";
		cout<<"\n";
		}

return ans;
}

void solve()
{

	ll n,m;
	cin>>n>>m;

	vector< vector<ll> > arr ( n, vector<ll> (m,0));

    for (ll i = 0; i < n; ++i)
    {
    	for (ll j = 0; j < m; ++j)
    	{
    		cin>>arr[i][j];
    	}
    }
    
    cout<<cal_min(arr)<<endl;
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}