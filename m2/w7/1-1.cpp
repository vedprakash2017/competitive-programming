#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;
lli n,m;
lli mod = 1e9+7;
lli dp[1001][1001];
lli temp[1001][1001];

// bool check(lli i, lli j)
// {
// 	if(i>=n || j>=m) return 0;
// 	return 1;
// }
lli rec(lli i,lli j)
{
	if( i>=n || j>=m || temp[i][j] ) return 0;

	if(i==n-1 && j == m-1) return 1;

	if(dp[i][j]!= -1) return dp[i][j];

	return dp[i][j] = (rec(i+1,j)+rec(i,j+1))%mod;
}

void solve()
{
    cin>>n>>m;

    for (int i = 0; i < n; ++i)
    {
    	for (int j = 0; j < m; ++j)
    	{
    		cin>>temp[i][j];
    		dp[i][j] = -1;
    	}
    }
	cout<<rec(0,0)%mod<<endl;
}

signed main()
{
    IOS
    lli t;cin>>t;while(t--)
    solve();
}