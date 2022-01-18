#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n,k;
vector <ll> arr;
ll dp[505][1010][3];

ll rec( ll lvl, ll c, ll f)
{

	if(c < 0 ) return 1e9; // purning not consider so take bigger value
	
	if(lvl == n ) 
		if(c==0)
		return 0; // we consider this so that taake 0s
	else 
		return 1e9;
	
	if(dp[lvl][c][f]!=-1) return dp[lvl][c][f];

	ll ans = 1e9;

	if(f == 0)
		ans = min( rec(lvl+1,c,0) , 1+rec(lvl+1 , c - arr[lvl] , 1));
	
	else if( f==1 )
		ans = min( rec(lvl+1,c,0) , 1+rec(lvl+1 , c - arr[lvl] , 2));
	else
		ans = rec(lvl+1,c,0);

	// 	ans = 1+min(ans,rec(lvl+1, c - arr[lvl] , 1));


	// 	ans = min(ans,rec(lvl+1, c, 1));
	// if(f!=2)
	// 	ans = 1+min(ans,rec(lvl+1, c - arr[lvl] , 1));

	// if( lvl+1<n && f!=1 && f!=2)
	// 	ans = 2+min(ans,rec(lvl+2, c - arr[lvl] - arr[lvl+1] , 2));

	return dp[lvl][c][f] = ans;

}

ll solve()
{
	ll x,y;
	cin>>n>>k;	arr.resize(n);
    for(int i=0;i<n;i++)
    {
    	cin>>x;
    	arr[i] = x;
    }
    for (int i = 0; i <= n; ++i)
    {
    	for (int j = 0; j <= k; ++j)
    	{
    		for (int y = 0; y < 3; ++y)
    		{
    		dp[i][j][y] = -1;
      		}
    	}
    }

    return rec(0,k,0);
}

signed main()
{
    IOS
    ll t;cin>>t;  ll tt = t;while(t--)
    {
    	cout<<"Case #"<<tt-t<<": ";
    	cout<<solve()<<"\n";
	}
}