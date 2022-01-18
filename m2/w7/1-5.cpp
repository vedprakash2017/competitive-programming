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
// #define Mod 1e8
#define fr(i,str,n) for(int i = str; i < n; i++)
#define all(x,i,j) (x).begin()+i,(x).end()+j
#define pp pop_back
#define N 
#define M

ll Mod = 1e8;

ll g,r,gl,rl;

ll dp[202][11][11];

ll rec(ll lvl,ll g0,ll r0)
{
	if(lvl == g+r+1)
	{
		return 1;
	}

	if(dp[lvl][g0][r0] != -1)
		return dp[lvl][g0][r0];

	ll ans = 0;

	return dp[lvl][g][r] = ans%(Mod);

}

void solve()
{

	cin>>g>>r>>gl>>rl;

	cout<<(rec(0,1,0)+rec(0,0,1))%(Mod)<<endl;

}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}