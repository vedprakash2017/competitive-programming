#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;
lli n;

vector<int> g[100];

vector<bool> vis;

vector <int> color;

bool flag = 1;

void dfs( int node, int comp)
{
	vis[node] = 1;
	color[node] = comp;

	for(auto x: g[node])
	{
		if(!vis[x])
		{
			dfs(x,3-comp);
		}
		else if( color[node] == color[x])
		{
			flag = 0;
		}
	}
}

int dist[100];

void bfs(int node)
{
	queue <int> q;
	
	q.push(node);
	dist[node] = 0;
	vis[node]  = 1;

	while(!q.empty())
	{
		lli p = q.front();
		q.pop();

		for(auto i : g[p])
		{
			if(!vis[i])
				{
					vis[i] = 1;
					dist[i] = dist[p]+1;
					q.push(i); 
				}
			else if( dist[p] == dist[i]) flag = 0;
		}
	}
}

void solve()
{
	lli x,y,m,n;

	// memset(vis,0,sizeof(vis));
	cin>>n>>m;
	
	color.resize(n+1);
	vis.resize(n+1);
	
	for (int i = 0; i < m; ++i)
	{
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}

for (int i = 1; i <= n; ++i)
{
	if(!vis[i])
		dfs(i,1);
}

if(flag) cout<<"yes";
else cout<<" no";

cout<<endl;
//bfs 
	vis.clear();
	flag = 1;
	vis.resize(n);
	for (int i = 1; i <=n; ++i)
	{
		if(!vis[i])
			bfs(i);
	}

if(flag) cout<<"yes";
else cout<<" no";

}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}
