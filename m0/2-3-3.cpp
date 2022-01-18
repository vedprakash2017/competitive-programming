#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

void solve()
{
    ll x, k , minn = 1e9, ans  = 0;
    cin>>n>>k;
    set <int> s;
    for(int i=0;i<n;i++)
    {
        cin>>x;

		if(s.count(x%k) == 0 ) s.insert(x%k);
		else 
		{

			x = x%k+k;
			while(s.count(x)>0)
		{
			x = x+k;
		}
			s.insert(x);
		}
		while(s.count(ans)!= 0)
			ans++;

		cout<<ans<<" "; 
    }
    cout<<endl;
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}