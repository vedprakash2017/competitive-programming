#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;
lli n,m;
vector<int> g[100100];

int vis[100100];

bool found = 0;

int parent[100200];

void dfs(int node,int par)
{
	vis[node] = 1;
	parent[node] = par;

	for(auto i: g[node])
	{
	
		if(i!=par)
	
		if(vis[i] == 0 )
			dfs(i,node);
		else if(vis[i] == 1)
		{
			if(!found)
			found = 1;
		break;
		}
	}
	vis[node] = 2;
}

void solve()
{
    cin>>n>>m;
    int x,y;
    for (lli i = 1; i <= m; ++i)
    {
    	cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for (int i = 1; i <= n; ++i)
    {
    	if(!vis[i])
    		dfs(i,0);
    }

    // cout<<found<<endl;
    cout<<(found?"YES":"NO");
}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}