#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll par[1010][1010];

void solve()
{
	map <ll,ll> mp;
    ll n,m,q;
    cin>>n>>m>>q;
    ll u,l,d,r,k;
    ll max = -1e9;

    for (int i = 0; i < 1010; ++i)
    {
    	for (int j = 0; j < 1010; ++j)
    	{
    		par[i][j] = 0;
    	}
    }

    for(int i=0;i<n;i++)
    {
    	cin>>u>>l>>d>>r>>k;
    	par[u][l] +=  k;
    	par[u][r+1] -=  k;
    	par[d+1][l] -=  k;
    	par[d+1][r+1] +=  k;
    }

    for(int i=1;i<=n;i++)
    {
    	for(int j =1;j<=m;j++)
    	{
    		par[i][j] = par[i][j] - par[i-1][j-1]+par[i-1][j]+par[i][j-1];
    		mp[par[i][j]]++;
    	}
    }

	for(auto i:mp)
	{
		if( i.first>max) max = i.first;
	}
	cout<<max<<" "<<mp[max]<<"\n";
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}