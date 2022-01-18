#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;
lli n,m;

int dx[4] = {1,0,-1,0};
int dy[4]={0,-1,0,1};


char g[1010][1010];

int vis[1010][1010];

bool check(int x,int y)
{
	if(g[x][y] == '#' || x<0 || x>=n || y<0 || y>=m) return 0;
	return 1;

}

void dfs(int x,int y)
{
	vis[x][y] = 1;

	for(int k=0; k<4; k++)
	{
		int x1 = x+dx[k];
		int y1 = y+dy[k];
		if(check(x1,y1) && !vis[x1][y1])
			{
				// cout<<x1<<y1<<endl;
				dfs(x1,y1);
			}
	}
	// cout<<x<<"hello"<<y<<endl<<endl;
}

void solve()
{
	cin>>n>>m;
    for (lli i = 0; i < n; ++i)
    {
    	for (lli j = 0; j < m; ++j)
    	{
        cin>>g[i][j];
    	}
    }
    lli ans= 0;

    for (int i = 0; i < n; i++)
    {
    	for (int j = 0; j < m; j++)
    	{
    		if( g[i][j]!='#' && !vis[i][j])
    			{
    				// cout<<i<<" n "<<j<<endl;
    				ans++;
    			dfs(i,j);
    		}
    	}
    }
    cout<<ans<<endl;
}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}