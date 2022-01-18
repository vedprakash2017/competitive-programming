#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;

void solve()
{
	lli x,y,c = 0;
	cin>>x>>y;
	lli ans = 0;
	while(y>x)
	{
		if(y%2 == 1)
		{
			y = y+1;
			y= y/2;
			ans+=2;
		}
		else
		{
			y= y/2;
			ans++;
		}
	}
	ans+=abs(x-y);
	cout<<ans<<endl;
	return;

}
signed main()
{
	IOS
	int t;cin>>t;while(t--)
	solve();
}