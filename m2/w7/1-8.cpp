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

string g[100100];
string rev[100100];
ll dp[100100][5];

ll cost[100100];

ll rec(ll lvl, int cc)
{
	if(lvl >= n) return 0;

	if(dp[lvl][cc]!=-1) return dp[lvl][cc];

	ll ans = 1e18;

	if(cc)
	{
		if( rev[lvl-1] <= g[lvl])

			ans = min(ans,rec(lvl+1 , 0));

		if( rev[lvl-1] <= rev[lvl])
			
			ans = min(ans, rec(lvl+1 , 1)+cost[lvl]);
	}
	else
	{
		if( g[lvl-1]  <= g[lvl] )
			ans = min(ans, rec(lvl+1 , 0));

		if( g[lvl-1]  <= rev[lvl] )
			ans = min(ans, rec(lvl+1 , 1)+cost[lvl]);
	}

	return dp[lvl][cc] = ans;
}


void solve()
{
	cin>>n;
	
	if(n==1) {cout<<0<<endl; return;}

	for(int i= 0;i<n;i++)
	{
		cin>>cost[i];
	}

	for(int i= 0;i<n;i++)
	{
		cin>>g[i];
		string temp = g[i];
		reverse(g[i].begin(),g[i].end());
		rev[i] = g[i];
		g[i] = temp;
	}

	// cout<<s[0];
	
	for(ll i=0;i<n;i++)
		for(int k = 0;k<2;k++)
			dp[i][k] = -1;
		

	ll ans = min(rec(1,0), rec(1,1)+cost[0]);

	if(ans == 1e18)
		cout<<-1<<endl;
	else
		cout<<ans<<endl;

}


signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}