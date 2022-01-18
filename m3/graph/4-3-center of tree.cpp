#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;
lli n;
vector<int> g[200100];

int depth[200100];
int parent[200100];
lli d = 1;

void  dfs(int node,int par,int dep)
{
	parent[node] = par;
	depth[node] = dep;
	for(auto i:g[node])
	{
		if(i!=par)
			dfs(i,node,dep+1);
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
    int maxd = 1;
    for (int i = 1; i <= n; ++i)
    {
    	if(depth[maxd] < depth[i])
    		maxd = i;
    }
    dfs(maxd,0,0);
    for (int i = 1; i <= n; ++i)
    {
    	if(depth[maxd] < depth[i])
    		maxd = i;
    }

    // dfs(1,0,0);

    d = depth[maxd];
    if(!(d%2))
    {
    	int c = d/2;
    	while(c--)
    	{
    		maxd = parent[maxd];
    	}
    	cout<<maxd;
    }
    else
    {

    	int c = d/2;int prev = maxd;
    	while(c--)
    	{
    		prev = maxd;
    		maxd = parent[maxd];

    	}
    	cout<<maxd<<" "<<prev;	
    }
}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}