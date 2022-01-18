#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;
lli n,w;

vector < vector<int>> arr;

lli dp[100][100100];

lli rec( lli lvl , lli tw)
{
	if(lvl == n ) return 0;
	
	if(tw> w) return 0;
	
	if(dp[lvl][tw]!=-1 ) return dp[lvl][tw];


	lli ans = INT_MIN;
	if(tw+arr[lvl][0] <= w) 
	ans = rec(lvl+1,tw+arr[lvl][0])+ arr[lvl][1];

	ans  = max( ans , rec(lvl+1, tw) );
	
	return dp[lvl][tw] = ans;
 }

void solve()
{
    cin>>n>>w;
    arr.resize(n);
    for (lli i = 0; i < n; ++i)
    {
    	arr[i].resize(2);
        	cin>>arr[i][0]>>arr[i][1];
    }
    memset(dp,-1,sizeof(dp));
    cout<<rec(0,0);
}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}