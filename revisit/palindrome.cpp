#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;
string s;
bool palin( ll l , ll r)
{
	if(l>= r) return 1;

	return s[l]==s[r] && palin(l+1,r-1);
}

void solve()
{
	cin>>s;
	cout<<palin(0, s.size()-1)<<"\n";

}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}