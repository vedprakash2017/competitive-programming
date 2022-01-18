#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;
lli n,k;
vector<int> temp;

bool dp[100100];

bool rec(lli lvl)
{
	if(lvl==0) return 0;
	
	bool ans =0;

	for(auto i:temp)
	{
		if( lvl-i>=0 && rec(lvl-i) == 0)
		{	
			ans = 1;
			break;
		}
	}
	return dp[lvl] = ans;
}

void solve()
{
    cin>>n>>k;
    temp.resize(n);
    for (lli i = 0; i < n; ++i)
    {
        cin>>temp[i];
    }
    if(rec(k))
    	cout<<"First";
    else
    	cout<<"Second";

}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}