#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

void solve()
{
	ll n,k,x;
    cin>>n>>k;
    vector<ll> ans;

    for (int i = 0; i < k; ++i)
    {
    	cin>>x;
    	ans.push_back(n-x);
    }

    sort(ans.begin() , ans.end());

    for (int i = 1; i < k; ++i)
    {
    	ans[i] = ans[i-1]+ans[i];
    }
    auto it = lower_bound( ans.begin() , ans.end(), n);
    if(it == ans.end())
    	cout<<k<<endl;
    else
    	cout<<it-ans.begin()<<endl;
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}