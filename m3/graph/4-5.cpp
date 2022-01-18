#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long lng int;
#define F first;
#define S second;
#define pb push_back;

using lli = long long int;

lli n,m;

vector <int> g[200200];

lli dp[200200];

lli mod = 1e9+7;

lli dfs(int node)
{


	if(node == n)
		return 1;
	if(dp[node] != -1) return dp[node];
	lli ans = 0;
	for(auto i:g[node])
	{
			ans = (ans+dfs(i))%mod;
	}
	return dp[node] = ans;

}
void solve()
{
    cin>>n>>m;
 	lli x,y;

 	for(int i = 0;i<=n;i++)
 		dp[i] = -1;
    
    for (lli i = 0; i < m; ++i)
    {
		cin>>x>>y;
		g[x].push_back(y);

    }

    cout<<dfs(1)%mod<<"\n";
}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}