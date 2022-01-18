#include <bits/stdc++.h>

using  namespace std;

#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pp pair<int,int>
#define F first
#define S second

ll n,m;
ll g[1001][1001];
ll dist[1001][1001];

int dx[8] = {1,1, 1, 0,-1,-1,-1,0};
int dy[8] = {1,0,-1,-1,-1, 0, 1,1};

bool check(ll x , ll y)
{
	if( x<0 || y<0 || x>=n || y>=m) return 0;
	return 1;
}

void bfs(int n1,int n2)
{	
	queue <pair<int,int>> q;
	
	q.push({n1,n2});
	
	dist[n1][n2] = 0;
	
	while(!q.empty())
	{
	
		pair<int,int> ss  = q.front();
	
		q.pop();
	
		ll dcur= dist[ss.F][ss.S];
	
			// for(int i = 0; i<8;i++)
			{
				int nx = ss.F+g[ss.F][ss.S];
				int ny = ss.S;

				int nx1 = ss.F;
				int ny1 = g[ss.F][ss.S]+ss.S;

				if(check(nx,ny))
				{
					if(dist[nx][ny]>dcur+1)
					{
						dist[nx][ny]  = dcur+1; 
						q.push({nx,ny});
					}
				}

				if(check(nx1,ny1))
				{
					if(dist[nx1][ny1]>dcur+1)
					{
						dist[nx1][ny1]  = dcur+1; 
						q.push({nx1,ny1});
					}
				}

			}
	} 

}

void solve()
{


	cin>>n>>m;
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<m;j++)
			
			{
				cin>>g[i][j];
				dist[i][j] = 1e18;
			}
	}

	// ll s1,s2,e1,e2;
	// cin>>s1>>s2>>e1>>e2;
	
	bfs(0,0);	
	
	if(dist[n-1][m-1] == 1e18)
		cout<<-1;
	else
		cout<<dist[n-1][m-1];
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}