#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

vector <int>g[100100] ;
int dist[100100];
int vis[100100];

void dfs(int node, int dis)
{
	dist[node] = dis;
	vis[node] = 1;

	for(auto i: g[node])
	{
		if(!vis[i])
		{
			dfs( i , dis+1 );
		}
	}

}


void bfs( int node, int dis)
{
	queue<int> q;
	dist[node] = dis;
	q.push(node);

	while(!q.empty())
	{
		int y = q.front();
		q.pop();
		int dcur = dist[y];
		for(auto i: g[y])
			{
					if(dcur +1 < dist[i])
					{
						dist[i] = dcur+1;
						q.push(i);
					}			
			}	
	}
}

void dbfs()
{

}


void solve()
{
	ll m,x,y;
	cin>>n>>m;
	memset(dist,0 , sizeof(dist));
	for(int i = 0; i<m;i++)
	{
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	dfs(1,0);
	cout<<dist[5];

	for(int i=1;i <=n ;i++)
		dist[i] = 1e9;
	
	bfs(1,0);
	
	cout<<dist[5];
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}