#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;
lli n;

void solve()
{
    cin>>n;
    if(n<=0) return;
    set <lli>  s;
    for (lli i = 1; i*i <= n; ++i)
    {
    	if(n%i == 0)
    	{
    		s.insert(i);s.insert(n/i);
    	}
    }
    for(lli x:s)
    {
    	cout<<x<<" ";
    }
    cout<<endl;
}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}