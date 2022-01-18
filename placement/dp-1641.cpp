#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;
ll mod = 1e9+7;
ll bin_exp( ll a, ll b)
{
	 ll ans =1;
	while(b>0)
	{
		if(b%2 == 1) 
			ans = (ans*a)%mod;
		
		a = (a*a)%mod;
		b/=2;
	}
	return ans;

}
void solve()
{
	ll a,b;
	cin>>a>>b;
	cout<<"hello";
	cout<<bin_exp(a,b);
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}