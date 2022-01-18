#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

void solve()
{
	ll x = 2, y =3;
	while(y!=0)
	{
		y = y-1;
		x = x+y;
	}
	cout<<x;
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}