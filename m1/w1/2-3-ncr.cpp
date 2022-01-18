#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n, m;
ll mod = 1e9+7;
ll fact[200200];

ll bin_exp(ll a, ll b)
{
	ll ans =1;
	while(b)
	{
		if(b%2) ans = (ans*a)%mod;
		a = (a*a)%mod;
		b/=2;
	}
	return ans;
}

void solve()
{
    cin>>n>>m;
    
    ll b = bin_exp(fact[n], mod -2  )%mod;
    
    ll c = bin_exp(fact[m], mod -2  )%mod;

    ll ans = ( fact[n+m]*((b*c)%mod))%mod;
    
    cout<<ans<<endl;

}

signed main()
{
    IOS
    fact[0] = 1;
    for(int i=1;i<200200;i++)
    {
    	fact[i] = (i*fact[i-1])%mod;
    }
    ll t;cin>>t;while(t--)
    solve();
}