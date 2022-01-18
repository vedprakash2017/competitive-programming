#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

void solve()
{
    ll n,t, ans = 1e18;
    cin>>n>>t;

    ll arr[n]; 
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    sort(arr,arr+n);

    for (int j = 0; j < n; ++j)
    {
    	int i = 0 , k = n-1;
    	while( i<j && j<k)
    	{
    		ans = min(ans, abs( arr[i] + arr[j] + arr[k] - t) );

    		if( arr[i] + arr[j] + arr[k] < t )
    		{
    			// while( i+1 < j && arr[i+1] == arr[i] )
    				i++;
    		}
    		else
    			// while( k-1 > j && arr[k-1] == arr[k] )
    				k--;

    	}
    }
    cout<<ans<<"\n";
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}