#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;
map <char,int> mp;

ll cal(ll a, ll b, char c)
{
	if(c == '+')
	{
		return a+b;
	}
	if(c == '-')
	{
		return a-b;
	}
	if(c == '*')
	{
		return a*b;
	}
	if(c == '/')
	{
		if(b!=0)
			return a/b;
		return 1;

	}
	cout<<c<<endl;
	return 1;
}

void solve()
{
	ll arr[4];
	char crr[2];
	char c; string s;

	cin>>c;
	cin>>arr[0];
	cin>>crr[0];
	
	cin>>arr[1];
	cin>>crr[1];
	
	cin>>arr[2];
	cin>>c;
	cin>>s;
	cin>>arr[3];
	ll ans = 0;
	if(mp[crr[0]] > mp[crr[1]])
	{
		ans = cal(arr[0], arr[1] , crr[0]);
		ans = cal(ans, arr[2] , crr[1]);
	}
	else
	{
		ans = cal(arr[1], arr[2] , crr[1]);
		ans = cal( arr[0], ans , crr[0]);
	}

	if(ans>=0) cout<<ans%arr[3];
	else
	{
		cout<<(ans+arr[3])%arr[3];
	}
	cout<<"\n";

}

signed main()
{
    IOS

	mp['-'] = 1;
	mp['+'] = 2;
	mp['*'] = 3;
	mp['/'] = 4;

    ll t;cin>>t;while(t--)
    solve();
}