#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;
ll val[1010];
ll dp[1010][1010];

ll rec(ll i, ll lim)
{
	if(lim ==0 ) return 1;

	if(lim<0 || i>n) return 0;

	if(dp[i][lim]!= -1) return dp[i][lim];

	ll ans = 0;

	ans = rec( i , lim - val[i] ) + rec( i+1 , lim );
	
	return dp[i][lim]  = ans;
}

void solve()
{
    ll x;
    cin>>n;
    val[0] = 0;
    for(int i=1;i<=n;i++)
    {
        val[i] =  i;
    }
    memset(dp,-1,sizeof(dp));
    cout<<rec(1,n);
    // cout<<"hello";
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}