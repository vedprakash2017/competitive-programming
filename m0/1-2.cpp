#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;
lli n,mod = 1001001001+7,ans = 1;
vector<lli> temp;

void solve()
{
	int y;
    cin>>n;
    for (lli i = 0; i < n; ++i)
    {
    	cin>>y;
    	ans*=y;
    }
    cout<<ans%mod<<endl;
    ans = 1;
}

signed main()
{
    IOS
    lli t;cin>>t;while(t--)
    solve();
}