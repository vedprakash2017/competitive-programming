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

ll n,m,q;
// vector < pair<ll,ll> , ll > g;
void solve()
{

	cin>>n>>m>>q;

	ll i,j,k,a,b,c;

	ll ans[n+1][n+1]= {};
	for(i = 1;i<=n;i++)
		for(j = 1;j<=n;j++)
            if(i!=j)
			ans[i][j] = 1e18;
	for(i = 0;i<m;i++)
	{
		cin>>a>>b>>c;
		
		ans[a][b] = ans[b][a] = min(ans[a][b] ,c);
	}

	for(k=1;k<=n;k++)
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
			{
				ans[i][j] = min(ans[i][j], ans[i][k]+ans[k][j]);
			}

	for(i = 0; i<q ; i++)
	{
		cin>>a>>b;
		if(ans[a][b] == 1e18)
		{
			cout<<-1<<endl;
			continue;
		}
		cout<<ans[a][b]<<endl;
	}
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}