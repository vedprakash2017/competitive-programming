#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;

lli n;
string s;
vector<lli> cost;

int dp[100100][10];
string t = "hard";

lli rec(lli lvl, int c)
{
	if(c==4) return 1e9;

	if(lvl == n ) return 0;

	if(dp[lvl][c] != -1) return dp[lvl][c];
	
	lli ans = 1e9;

	if(s[lvl] == t[c])
	{
		ans  = min( ans, rec(lvl+1,c+1));
                ans = min(ans,rec(lvl+1,c)+cost[lvl]  );
	}
	else
	{
		ans = min(ans, rec(lvl+1,c) );
	}

	return dp[lvl][c] = ans;
}


void solve()
{
    cin>>n;
    cin>>s;
    memset(dp,-1,sizeof(dp));
    cost.resize(s.size());
    for (int i = 0; i < s.size(); ++i)
    {
    	cin>>cost[i];
    }

    cout<<rec(0,0)<<"\n";
}

signed main()
{
    IOS
    lli t;cin>>t;while(t--)
    solve();
}