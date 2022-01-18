#include <bits/stdc++.h>

using  namespace std;

#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define vl vector<ll>   
#define vpl vector<pair<ll,ll>>
#define vvl vector<vl>
#define pl pair<ll,ll>
#define mpl map<ll,ll>
#define umpl unordered_map<ll,ll>
#define umpcl unordered_map<char,ll>
#define pb push_back
#define F first
#define S second
#define Mod 1e9+7
#define fr(i,str,n) for(int i = str; i < n; i++)
#define all(x,i,j) (x).begin()+i,(x).end()+j
#define pp pop_back
#define N 
#define M

ll n,m;
char g[101][101];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,-1,0,1};
ll dist1[101][101];
ll dist2[101][101];

queue < pair<int,int> > q;
queue < pair<int,int> > q2;

bool check(ll x,ll y)
{
	if(g[x][y] == '#' || x<0 || y<0|| x==n || y == m)
		return 0;
	return 1;
}

void bfs()
{	
	while(!q.empty())
	{
		pair<int,int> x = q.front();
		ll dcur = dist1[x.F][x.S];
		int i;
		fr(i,0,4)
		{
			int x1 = x.F+dx[i];
			int y1 = x.S+dy[i];

			if(check(x1,y1))
			{
				if(dist1[x1][y1]>dcur+1)
				{
					dist1[x1][y1] = dcur+1;
					q.push({x1,y1});
				}
			}
		}
	}
}

void bfs2()
{

	while(!q2.empty())
	{
		pair<int,int> x = q2.front();

		ll dcur = dist2[x.F][x.S];
		int i;
		fr(i,0,4)
		{
			int x1 = x.F+dx[i];
			int y1 = x.S+dy[i];

			if(check(x1,y1))
			{
				if(dist2[x1][y1]>dcur+1)
				{
					dist2[x1][y1] = dcur+1;
					q2.push({x1,y1});
				}
			}
		}
	}
}

void solve()
{
	ll i,j;
    cin>>n>>m;
    fr(i,0,n)
    {

	    fr(j,0,m)
	    {	
    		cin>>g[i][j];
    		dist1[i][j] = 1e18;
    		dist2[i][j] = 1e18;
    		if(g[i][j] == 'M')
    			{
    				q.push({i,j});
    				dist1[i][j] = 0;
    			}
    		if(g[i][j] == 'A')
    			{
    				q2.push({i,j});
    				dist2[i][j] = 0;
    			}

    	}
	}

	bfs();
	bfs2(); 
	bool found = 1;
	fr(i,0,n)
	{
		fr(j,0,m)
		{
			if( g[i][j] == '.' && (i==0 || j==0 || i==n-1 || j==m-1 ) && dist2[i][j] != 1e18 && dist1[i][j]<dist2[i][j])
			{
					found = 1;
					break;
			}
		}

		if(found)
			break;
	}

	if(found)
		cout<<"YES"<<" "<<dist2[i][j];
	else
		cout<<"NO";
}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}