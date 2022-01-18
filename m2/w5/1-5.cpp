#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;
lli n,ans = 0;
vector<int> temp;
bool check(lli pr,lli pc)
{
	for (int i = 0; i < temp.size(); ++i)
	{
		if(( abs(pr-i)<=2 && abs(pc-temp[i])<=2 )|| abs(pr-i)==abs(pc-temp[i]) || pc == temp[i]) return 0;
	}
	return 1;
}

void rec(lli lvl)
{
	if(lvl == n) ans++;
	for (lli i = 0; i < n; ++i)
	{
		if(check(lvl,i))
		{

			// cout<<lvl<<" "<<i<<endl;
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
    cout<<ans;
}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}