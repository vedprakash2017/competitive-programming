#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n ,ans = 0;
vector<int> queen;

bool check( int r, int c)
{
	for(int i = 0; i<queen.size() ; i++)
	{
		if( queen[i] == c || ( abs(i-r) == abs(queen[i] -c) ))
			return 0;
	}
	return 1;
}

void rec( int lvl)
{
	if(lvl == n)
		ans++;

	for(int i =0; i<n; i++)
	{
		if(check(lvl , i))
		{
			queen.push_back(i);
			rec( lvl+1);
			queen.pop_back();
		}
	}
}


void solve()
{
	queen.clear();
	ans  =0;
    
    cin>>n;
    
    rec(0);
    cout<<ans<<endl;
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}