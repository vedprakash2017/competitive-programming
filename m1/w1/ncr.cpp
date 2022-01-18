#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;
ll mod = 1e9+7;

ll bin_exp(ll a, ll b, ll  c)
{
	ll ans = 1;
	while(b)
	{
		if(b%2)
		{
			ans = (ans*a)%c;
		}
		a = (a*a)%c;
		b/=2;
	}
	return ans;
}

void solve()
{
    ll r;
    cin>>n>>r;

    ll fact[n];

    fact[0] = 1;
    for (int i = 1; i <= n; ++i)
    {
    	fact[i] = i*fact[i-1];
    }

	ll a = fact[n]%mod;
	ll b = (bin_exp(fact[n-r] , mod - 2 , mod)+mod)%mod; // you can also remove +mod  
	ll c = (bin_exp(fact[r] , mod - 2 , mod)+mod)%mod; 

    cout<<(a*b*c)%mod;

}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}