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
ll c1 = 1,c2= 1;
char g[1001][1001];
int vis[1001][1001];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,-1,0,1};
bool check(ll i, ll j)
{
	if(g[i][j] =='.' || i<0 || j<0 || i>=n ||j>=n ) return 0;
	return 1;
}

void dfs(int node,int node2)
{
	vis[node][node2] = 1;

	int i;

	fr(i,0,4)
	{
		int x1 = node+dx[i];
		int y1 = node2+dy[i];

		if(!vis[x1][y1])
		{
			if(check(x1,y1))
			{
				dfs(x1,y1);
				++c1;
			}
			else
			{
				c2++;
			}
		}
	}
}

void solve()
{

    cin>>n;
    ll m = n;
    int i,j;
    fr(i,0,n)
    {
    	fr(j,0,m)
    	{
    		cin>>g[i][j];	
    	}
    }
    ll c11 = 0, c22 = 0;

    fr(i,0,n)
    {
    	fr(j,0,m)
    	{
    		if(check(i,j) && !vis[i][j])
    		{
    			// cout<<i<<j<<endl;
    			dfs(i,j);
    			if(c11 == c1)
    			{
    				if(c22 > c2)
    					c22 = c2;
    			}
    			else
    			{
    				c11=max(c11,c1);
    				c22 = c2;
    			}
    			c1 = 1; c2 = 0;
    		}	
    	}
    }
    cout<<c11<<" "<<c22;

}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}