#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;
lli n;
vector<int> temp;
lli dp[2020][2020];

lli rec(int lvl1 , lli lvl2)
{
	if(lvl1 > leb) return 0;

	if( dp[][] !=-1)
		return dp[][];
	int ans = 0;
	if(s1[] == s2[])
		ns =  ( rec(lvl1+1,lvl2+1)+1);
	return dp[][] = max{ ans,rec(lvl1,lvl2+1),rec(lvl1+1,lvl2) };
}

void solve()
{
    cin>>s1>>s2;
    memset(dp,-1,sizeof(dp));
}


signed main()
{
    IOS
    lli t;cin>>t;while(t--)
    solve();
}