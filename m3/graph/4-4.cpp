#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;
lli n;
vector<int> g[200100];

int depth[200100];
int parent[200100];
int subs[200200];

void dfs(int node, int par, int dep)
{
	parent[node] = par;
	depth[node] = dep;
	subs[node] = 1;
	for(auto i: g[node])
	{
		if(i!=par)
		{
			dfs(i,node,dep+1);
			subs[node] +=subs[i];
		}
	}

}

void solve()
{
	int x,y;

    cin>>n;
    
    for (lli i = 0; i < n-1; ++i)
    {
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    dfs(1,0,0);
    
    lli sum = 0;
    
    for (int i = 1; i <=n; ++i)
    {
    	sum+= abs(subs[i]*(n-subs[i]) );
    }
    cout<<sum;
}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}