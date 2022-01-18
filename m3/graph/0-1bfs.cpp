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
vpl g[101];

ll dist[101];

void bfs(ll node)
{
	deque <ll> dq;
	dq.push_back(node);

	dist[node] = 0;
	while(!dq.empty())
	{
		ll n = dq.front();
		dq.pop_front();

			ll dcur = dist[n];
		for(auto i:g[n])
		{
			int nn = i.F;
			int  ww = i.S;
			
			if(dist[nn]>dcur+1)
			{
				if(ww == 0)
				{
					dist[i.F]  = dcur;
					dq.push_front(nn);
				}
				else 
				{
					dist[i.F] = dcur+1;	
					dq.push_back(nn);
				}
			}
		}
	}
}

void solve()
{
	int m;
    cin>>n>>m;
    int x,y,w,i;
    fr(i,0,m)
    {
    	cin>>x>>y>>w;
    	g[x].push_back({y,w});
    	g[y].push_back({x,w});
    }
    fr(i,1,n+1)
    	dist[i] = 1e8;

    bfs(1);
    cout<<dist[6];
}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}