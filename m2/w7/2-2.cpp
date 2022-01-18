#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;
lli n,m;

vector < vector <int> > temp;

lli dp[1001][1001];

bool check(lli i,lli j)
{
	if(i>=n || j>= m) return 0;
	return 1;
}

lli rec(lli i,lli j)
{
	if(!check(i,j)) return -1e9;

	if(i==n-1 && j == m-1 ) return temp[i][j];

	if(dp[i][j] != -1e9) return dp[i][j];

	lli ans = 0;

	ans = temp[i][j] + max(rec(i+1,j),rec(i,j+1));

	return dp[i][j] = ans;

}

void solve()
{
    cin>>n>>m;
    temp.resize(n);
    for (lli i = 0; i < n; ++i)
    {
    	temp[i].resize(m);
    	for (int j = 0; j < m; ++j)
    	{
    		dp[i][j] = -1e9;
    		cin>>temp[i][j];
    	}
        
    }
    cout<<rec(0,0)<<endl;
}

signed main()
{
    IOS
    lli t;cin>>t;while(t--)
    solve();
}