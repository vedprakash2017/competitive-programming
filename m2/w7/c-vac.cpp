#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;
lli n;

vector < vector<int> > temp;

lli dp[100100][3];

lli rec(lli lvl , lli taken)
{
	if(lvl==n) return 0;

	if(dp[lvl][taken]!=-1) return dp[lvl][taken]; 
	lli ans = INT_MIN;
	for (int i = 0; i < 3; ++i)
	{
		if(taken != i || taken < 0 )
		ans = max(ans, rec(lvl+1,i)+temp[lvl][i]);
	}
	return dp[lvl][taken] = ans;
}

void solve()
{
    cin>>n;
    temp.resize(n);
    lli y;
    for (lli i = 0; i < n; ++i)
    {	

    	temp[i].resize(3);
		cin>>temp[i][0]>>temp[i][1]>>temp[i][2];        
    }

    memset(dp,-1,sizeof(dp));
    cout<<max({ rec(0,0) , rec(0,1) , rec(0,2)});
}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}
