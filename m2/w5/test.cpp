#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;
lli n;
vector<int> temp;
map <int,int> mp;
bool check(lli x, lli y)
{

}
void rec(lli lvl)
{
	if(lvl==n) 
		{
			
			return;
		}
	for (int i = 0; i < n; ++i)
	{
		if(check(lvl,i))
		{
			temp.push_back(i);
			rec(lvl+1);
			temp.pop_back();
		}
	}
}
void solve()
{
    cin>>n;
    rec(0);
}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}