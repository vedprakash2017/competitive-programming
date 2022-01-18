#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;
lli n;
vector<int> temp;
string s;

lli dp[10010];

lli dp2[10010][10010];

bool rec2(lli l, lli r)
{
	if(l >= r ) return 1;

	if(dp2[l][r] !=-1)
		return dp2[l][r];

	return dp2[l][r] = (s[l]==s[r])&&rec2(l+1,r-1);
}

lli rec(lli lvl)
{
	if(lvl == -1) return 0;

	if(dp[lvl]!=-1)
		return dp[lvl];

	lli ans = 0;
	for (int i = lvl-1; i>=0; ++i)
	{
		if(rec2(i+1,n))
		{
				ans = min(ans, rec(i)+1);
		}
	}
	return ans;
}

void solve()
{
	cin>>s;
	n = s.size();
	memset(dp,-1,sizeof(dp));
	memset(dp2,-1,sizeof(dp2));
	rec(s.size()-1);

}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}