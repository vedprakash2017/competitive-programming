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
vl g[100100];
ll dist[100100];
int leaf[100100];

ll maxx = -1e9;

void dfs(ll node,ll parr)
{
	ll par =parr;
	
	int c = 0;
	
	for(auto i: g[node])
	{
		if(i!=par)
		{
			c++;
			dist[i] = dist[node]+1;
			maxx = max(dist[i], maxx);
			dfs(i,node);
		}
	}
	if(c==0  )
	{
		leaf[node] = 1;
	}
}

void solve()
{
    cin>>n;
    if(n== 1) {cout<<"YES"; return;}
    int x,y;
    fr(i,0,n-1)
    {
    	cin>>x>>y;
    	g[x].push_back(y);
    	g[y].pb(x);
    }
    memset(dist,0,sizeof(dist));
    dfs(1,0);

    // cout<<maxx;
    fr(i,1,n+1)
    {
    	// cout<<dist[i]<<endl;
    }	
    fr(i,1,n+1)
    {
    	if(leaf[i] == 1 && dist[i]!=maxx)
    	{
    		cout<<"YES";
    		return;
    	}
    }
    cout<<"NO";
}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}