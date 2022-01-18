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
#define Mod (ll)(1e9+7)
#define fr(i,str,n) for(int i = str; i < n; i++)
#define all(x,i,j) (x).begin()+i,(x).end()+j
#define pp pop_back
#define N 
#define M

ll n,m,k;

ll dp[202][202][404];

ll g[202][202];

ll rec(ll i, ll j, ll cont)
{
	
	if(i==n-1 && j==m-1)
	{
		if(g[i][j] == 0 ) return 1;
		else if(cont>0) return 1;
		return 0;
	}
	
	if(cont<0)
		return 0;

	if(dp[i][j][cont] != -1 )
	{
		return dp[i][j][cont];
	}

	ll ans = 0;
	

	if(i+1<n && g[i+1][j] == 1 )
		ans+= rec(i+1,j,cont-1)%Mod;
	
	if(j+1<m && g[i][j+1] == 1)

		ans+=rec(i,j+1,cont-1)%Mod;
	
	if(i+1<n && g[i+1][j] == 0)
		
		ans+= rec(i+1,j,cont)%Mod;

	if(j+1<m && g[i][j+1] == 0)
		
		ans+=rec(i,j+1,cont)%Mod;
	
	return dp[i][j][cont] = ans%Mod;
}

void solve()
{
    cin>>n>>m>>k;
    for(int i=0;i<n;i++)
    {
		for(int j=0;j<m;j++)
    		{
    			cin>>g[i][j];
    		}

    }
    for(int i=0;i<n;i++)
    {
		for(int j=0;j<m;j++)
    		{
    			for(int q = 0;q<=k;q++)
    			dp[i][j][q] = -1;
    		}

    }

    if(g[0][0])
    	cout<<rec(0,0,k-1)%Mod<<"\n";
    else
    	cout<<rec(0,0,k)%Mod<<"\n"; 	
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}