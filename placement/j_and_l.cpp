#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

void solve()
{
    ll x;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>x;
    }
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}

// dfs
#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;
lli n,m;
vector<int> g[100100];

int vis[100100];

bool found = 0;

int parent[100200];

void dfs(int node,int par)
{
	vis[node] = 1;
	parent[node] = par;

	for(auto i: g[node])
	{
	
		if(i!=par)
	
		if(vis[i] == 0 )
			dfs(i,node);
		else if(vis[i] == 1)
		{
			if(!found)
			found = 1;
		break;
		}
	}
	vis[node] = 2;
}

void solve()
{
    cin>>n>>m;
    int x,y;
    for (lli i = 1; i <= m; ++i)
    {
    	cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for (int i = 1; i <= n; ++i)
    {
    	if(!vis[i])
    		dfs(i,0);
    }

    // cout<<found<<endl;
    cout<<(found?"YES":"NO");
}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}


// 0 - 1 bfs
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


// bfs



// dijstra
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define endl '\n'
#define int ll
#define mod 1000000007
const int N = 1001001;
string s;
int n,m,k;
vector<pair<int,int>>g[100100];
int vis[100100];
int dis[100100];
void dijkstra(int sc)
{
    for(int i=1;i<=n;i++)
    {
        dis[i]=1e18;vis[i]=0;
    }
    dis[sc]=0;
    priority_queue<pair<int,int>>pq;
    
    pq.push(make_pair(0,sc));
    
    while(!pq.empty())
    {
        pair<int,int>x=pq.top();
        pq.pop();
        
        if(!vis[x.second])
        {
            vis[x.second]=1;
            
            for(auto it: g[x.second])
            {
                int neigh=it.first;
                int wt=it.second;
                
                if(dis[neigh]>wt+dis[x.second])
                {
                    dis[neigh]=wt+dis[x.second];
                    pq.push(make_pair(-dis[neigh],neigh));
                }
            }
        }
    }
}
signed main()
{
    IOS
   int t;
  // cin>>t;
   t=1;
   while(t--)
   {
       cin>>n>>m;
       for(int i=1;i<=m;i++)
       {
           int a,b,c;
           cin>>a>>b>>c;
           g[a].push_back(make_pair(b,c));
       }
       dijkstra(1);
       for(int i=1;i<=n;i++) cout<<dis[i]<<" ";
       
   }   
   return 0;
}


// center of tree
#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;
lli n;
vector<int> g[200100];

int depth[200100];
int parent[200100];
lli d = 1;

void  dfs(int node,int par,int dep)
{
	parent[node] = par;
	depth[node] = dep;
	for(auto i:g[node])
	{
		if(i!=par)
			dfs(i,node,dep+1);
	}
}

void solve()
{
	int x,y;
    cin>>n;
    for (lli i = 0; i < n-1; ++i)
    {
        cin>>x>>y;
        
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1,0,0);
    int maxd = 1;
    for (int i = 1; i <= n; ++i)
    {
    	if(depth[maxd] < depth[i])
    		maxd = i;
    }
    dfs(maxd,0,0);
    for (int i = 1; i <= n; ++i)
    {
    	if(depth[maxd] < depth[i])
    		maxd = i;
    }

    // dfs(1,0,0);

    d = depth[maxd];
    if(!(d%2))
    {
    	int c = d/2;
    	while(c--)
    	{
    		maxd = parent[maxd];
    	}
    	cout<<maxd;
    }
    else
    {
        int ans = -1;
	cout<<ans;
//     	int c = d/2+1;int prev = maxd;
//     	while(c--)
//     	{
//     		prev = maxd;
//     		maxd = parent[maxd];

//     	}
//     	cout<<prev<<" "<<maxd;	
    }
}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}