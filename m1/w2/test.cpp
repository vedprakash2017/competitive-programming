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
#define fr(i,str,n) for(int i = str; i < n; i++)
#define all(x,i,j) (x).begin()+i,(x).end()+j
#define pp pop_back
#define N 
#define M

ll n,m,k, Mod = (ll)(1e9+7);

ll g[202][202];
ll dp[202][202][404];

ll rec(ll i, ll j, ll c)
{

	if(c<0 || i>=n || j>=m) return 0;
	if(i == n-1 && j == m-1 )
	{
		if(g[i][j])
		{
			if(c>0) return 1;
			return 0;
		}
		else return 1;
	}

	if(dp[i][j][c] != -1) return dp[i][j][c];

	ll ans = 0;

	if(g[i][j])
	{
        if(c==0) return dp[i][j][c] = 0;
		
        ans = (rec(i+1,j,c-1)%Mod+rec(i,j+1,c-1)%Mod)%Mod;
	}
	else
	{
		ans = (rec(i+1,j,c)%Mod+rec(i,j+1,c)%Mod)%Mod;
	}
	
	// cout<<i<<" "<<j<<" "<<ans<<endl;
	return dp[i][j][k] = (ans)%Mod;

}

void solve()
{
	cin>>n>>m>>k;

	for(int i= 0;i<n;i++)
	{
		for(int j = 0;j<m;j++)
		{
			cin>>g[i][j];
			for(int p = 0;p<=k;p++)
			{
				dp[i][j][p]  = -1;
			}
		}
	}

	cout<<rec(0,0,k)<<"\n";
	// cout<<dp[1][0][]
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
} 