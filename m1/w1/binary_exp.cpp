#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

ll bin_exp(ll a, ll b , ll mod)
{
	ll ans = 1;
	while(b)
	{
		if(b%2 == 1) 
		{
			ans = (ans*a)%mod;
		}
		a = (a*a)%mod;
		b/=2;
	}
	return ans;
}

void solve()
{
	ll a,b;
	cin>>a;
	cout<<bin_exp(a,1e9+7-2,1e9+7);// a^-1 mod c = a^(c-2) mod c if c is prime.
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}