#include <bits/stdc++.h>

using  namespace std;

#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pp pair<int,int>
#define F first
#define S second

ll n,m;

char  g[1001][1001];
ll dist[1001][1001];

int dx[8] = {1,1, 1, 0,-1,-1,-1,0};
int dy[8] = {1,0,-1,-1,-1, 0, 1,1};

bool check(ll x , ll y)
{
	if(g[x][y] == '#' || x<0 || y<0 || x>=n || y>=m) return 0;
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
	
			for(int i = 0; i<8;i++)
			{
				int nx = dx[i]+ss.F;
				int ny = dy[i]+ss.S;

				if(check(nx,ny))
				{
					if(dist[nx][ny]>dcur+1)
					{
						dist[nx][ny]  = dcur+1; 
						q.push({nx,ny});
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

	ll s1,s2,e1,e2;

	cin>>s1>>s2>>e1>>e2;
	
	bfs(s1,s2);	
	
	if(dist[e1][e2] == 1e18)
		cout<<-1;
	else
		cout<<dist[e1][e2];
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}