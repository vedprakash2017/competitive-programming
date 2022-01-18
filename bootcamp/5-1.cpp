#include <bits/stdc++.h>

using namespace std;

#define ll long long int;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll n,m,c;
string g[202];
vis[202][202];

void dfs( int i, int j)
{
	vis[i][j] = 1;

	for(int q = 0; q<4; q++ )
	{

	}
}


void solve()
{
	cin>>n>>m;

	for(int i= 0; i<n; i++)
	{
		cin>>g[i];
		for (int j = 0; j <= m; ++j)
		{
			vis[i][j] = 0;
		}
	}   

	for(int i=0; i<n;i++)
	{
		for(int j = 0; j<m;j++)
		{
			if( j == '1' && vis[i][j] == 0)
			{
				int pre = c;
				dfs(i,j);
				ans = (c , pre);
			}
		}
	}

	cout<<ans;
}
signed main()
{
    int t; cin>>t; while(t--)
    solve();    
}