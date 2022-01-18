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
ll dp[505][505];
ll g[505];
ll pre[505];

ll rec(ll i, ll j)
{

	if(i==j) return 0;

	if(dp[i][j]!=-1) return dp[i][j];

	ll ans = 1e9;

	for(ll m = i; m<j;m++)
	{
		ll a,b;
		if(m == i )
			a= g[m]%100;
		else
			if(i-1>=0)
				a = (pre[m] - pre[i])%100;
			else
				a  = pre[m]%100;

		b = (pre[j] - pre[m])%100;
		// cout<<i<<j<<m<<" "<<a<<b<<endl;
		ans = min( ans, rec(m+1,j)+rec(i,m)+a*b );
	}

	return dp[i][j] = ans;
}

void solve()
{
    cin>>n;

    for(int i=0;i<n;i++)
    {
    	cin>>g[i];
    	pre[i] = g[i];
    	if(i) pre[i]+=pre[i-1];
    }

    for(int i =0;i<n;i++)
    	for(int j=0;j<n;j++)
    	{
    		dp[i][j] = -1;
    	}

    cout<<rec(0,n-1)<<endl;
}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}