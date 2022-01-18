#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

void solve()
{
    ll x;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    ll ans = 0;
    for (int i = 1; i < n; ++i)
    {
    	if(v[i-1] > v[i])
    		ans += v[i-1] - v[i];
    }
    cout<<ans<<"\n";
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}