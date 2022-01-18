#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>
ll mod = 1e9+7;
ll n;
ll pow_exp(int a, int b)
{
	ll ans = 1;
	while(a>0)
	{
		if(b%2)
			ans = (ans*a)%mod;
		a = (a*a)%mod;
		b/=2;
	}

	return ans;
}
void solve()
{
	string s;
	cin>>s;

	ll ans = 0, p = 1;
	for(int i = s.size()-1; i>=0; i--)
	{
		ll mu = s[i]-'A'+1;
		ans += mu*p;
		p = p*26;
		p%=mod;
		ans%=mod;
	}

	cout<<ans<<endl;

}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}