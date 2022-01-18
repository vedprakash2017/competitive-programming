#include <bits/stdc++.h>

using  namespace std;

#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int

ll n;

void solve()
{
	map <ll,ll> mp;
    cin>>n; ll arr[n];
    for(int i =0 ;i<n;i++)
    {
    	cin>>arr[i]; mp[arr[i]]++; 
    }
    
    int x = 1, ans = 0;
    for(int j = 0; j < 32;j++)
    {
    	for(int i =0 ;i<n;i++)
	    {
	    	
	    	mp[arr[i]]--;
	    	if(mp.count(x-arr[i]))
	    	{
	    		ans+=mp[x-arr[i]];
	    	}
	    }
	    for(int i =0 ;i<n;i++)
	    {
	    	mp[arr[i]]++;
	    }
	    x*=2;
	}

	cout<<ans<<"\n";
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}