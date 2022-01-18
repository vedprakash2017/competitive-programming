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
#define N 100100
#define M

ll n;

vpl g[N];
ll dist[N];
int vis[N]; // not needed but in some cases for opti

void dbfs(ll node)
{

    fr(i,1,n+1)
    {
    	dist[i] = 1e9;
    	vis[i] = 0;
    }

	priority_queue < pair<ll,ll> > pq; // for opti dont use any function
	pq.push({-0,node});
	dist[node] = 0;

	while(!pq.empty())
	{
		ll n = pq.top().second;
		pq.pop();
		ll dcur = dist[n];

		if(!vis[n])
		{
			vis[n] = 1;
				for(auto i:g[n])
				{
					ll nn = i.F;
					ll ww = i.S;

						if(dist[nn]>dcur+ww)
						{
							dist[nn] = dcur+ww;
							pq.push({ -dist[nn], nn });
						}
				}
		}
	}

}
void solve()
{
	ll x,y,w,m;
    
    cin>>n>>m;
    
    fr(i,0,m)
    {
    	cin>>x>>y>>w;
    	g[x].push_back({y,w});
    	// g[y].push_back({x,w});
    }
    dbfs(1);
    cout<<dist[2];
}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}