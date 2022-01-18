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
int g[1001][1001];
ll dist[1001][1001];
ll countt[1001];
int vis[1001][1001];
int dx[4] = {0,1,0,-1};
int dy[4] = {1, 0 , -1 , 0};

ll cnt = 1;

void dfs(ll n1,ll n2, ll c)
{
	dist[n1][n2] = c;
	vis[n1][n2] = 1;
	
	cout<<"mc"<<n1<<n2<<endl;

	ll i;
	
	fr(i,0,4)
	{
		ll x1 = dx[i]+n1;
		ll y1 = dy[i]+n2;
		if(!vis[x1][y1] && g[x1][y1] == '1' && x1>=0 && y1>=0 && x1<n && y1<m)
		{

			dfs(x1,y1,c);
			cnt++;
		}
	}

}

void solve()
{
	ll q,i,j;
    cin>>n>>m>>q;
    ll tcnt =0;
    fr(i,0,n)
    {
    	fr(j,0,m)
    	{
    		cin>>g[i][j];
    		
    		if(g[i][j] == 1)
    		{
    			tcnt++;
    		}
    	}
    }


	ll c = 0;
    fr(i,0,n)
    {
    	fr(j,0,m)
    	{
    		if(!vis[i][j] && g[i][j] == 1)
    		{
    			c++;
    			dfs(i,j,c);
    			countt[c]  = cnt;
    			cnt = 1;

    			cout<<i<<" "<<j<<"h"<<endl;
    			cout<<c<<" "<<cnt<<endl;
    		}

    	}
    }	

	ll x,y;
	cout<<dist[0][0]<<endl;
    fr(i,0,q)
    {
    	cin>>x>>y;
    	cout<<g[x-1][y-1]<<dist[x-1][y-1]<<endl;
    	if(g[x-1][y-1] ==  1)
    	{
    		cout<<tcnt-countt[dist[x][y]];
    	}
    	else
    		cout<<tcnt;
    	cout<<"\n";
    }
}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}