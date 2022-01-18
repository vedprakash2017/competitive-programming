#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

void solve()
{
    ll x;
    cin>>n;
    int head = -1, tail = 0;
    ll ans = 0, sum = n, s = 0;
    while(tail<=n)
    {
    	while( head+1<=n && s<sum)
    	{
    		head++;
    		s+=head;
    	}

    	if(s == sum)
    		ans++;

    	if(tail<=head)
    	{
    		s= s-tail;
    		tail++;
    	}
    	else
    	{
    		tail++;
    		head = tail-1;
    	}
    }
    cout<<ans<<endl;
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}