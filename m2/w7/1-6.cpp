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
int g[1010][1010];
int dp[1010][1010];

ll rec(int i,int j)
{

	if(i==0 && j==0 )
		return g[i][j];

	if( i<0 || j<0)
		return 0;

	if(dp[i][j]!=-1)
		return dp[i][j];
	

	if(g[i][j] == 0 )
		return 0;
	else
		return dp[i][j] = 1 + min({ rec(i-1,j-1) , rec(i-1,j) , rec(i,j-1)});

}
void solve()
{
    cin>>n>>m;

    int i,j;

    fr(i,0,n)
    {
    	fr(j,0,m)
    	{

    		cin>>g[i][j];
    		dp[i][j] = -1;

    	}
    }
    ll ans = -1e9;
    fr(i,0,n)
    {
    	fr(j,0,m)
    	{

    	ans = max(ans,rec(i,j));
    	}
    }
    cout<<ans*ans<<endl;
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}