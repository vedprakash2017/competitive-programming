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

ll n;
vpl g[100100];
ll vis[100100];
ll dist[100100];

void dbfs(int node)
{
	int i;
	fr(i,1,n+1)
	{
		dist[i] = 1e9;
		vis[i] = 0;
	}
	priority_queue < pair<int,int>> pq;
	pq.push({0,node});

	while(!pq.empty())
	{
		ll  n = pq.top().second;
		pq.pop();
		ll dcur = n;

		for(auto i: g[n])
		{
			ll nn = i.F;
			ll ww = i.S;

			if(!vis[nn])
			{
				if(dist[nn]>dcur+ww)
				{
					dist[nn] = dcur+ww;
					pq.push({-ww,nn});
				}
			}
		}
	}
}

void solve()
{
	ll i,x,y,w,m;
    cin>>n;
    fr(i,0,n)
    {
    	cin>>x>>y>>w;
    	g[x].push_back({y,w});
    	g[y].push_back({x,w});
    }
    dbfs(1);
    cout<<dist[6];
}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}