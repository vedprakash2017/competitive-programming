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
vl g[100100]; 
int vis[100100];
ll cnt = 1;

void dfs(int node)
{
	vis[node] = 1;
	for(auto i:g[node])
	{
		if(!vis[i]) 
			{
				dfs(i);
				cnt++;
			}
	}
}
void solve()
{
    cin>>n>>m;
    int x,y,i;
    fr(i,0,m)
    {
    	cin>>x>>y;
    	g[x].pb(y);
    	g[y].pb(x);
    }
    ll  c1 = 0,c2=0;
    fr(i,1,n+1)
    {
    	if(!vis[i])
    	{
    		dfs(i);
    		c1+=cnt;
    		c2+=cnt*cnt;
    		cnt = 1;
    	}
    }
    // cout<<c1<<c2<<endl;
    cout<<(c1*c1-c2)/2;

}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}