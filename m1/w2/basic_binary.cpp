#include <bits/stdc++.h>

// dont include mid in lo and hi after inc or dec

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

void solve()
{
    cin>>n;
 
    int arr[n];
 
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
 
    sort(arr,arr+n);

    ll x, ans = 0, lo = 0, hi = n-1 , mid;
    
    cin>>x;
	    
    while(lo<= hi)
    {
    	mid = (lo+hi)/2;

    	if( arr[mid] == x)
    	{
    		ans = 1;
    		break;
    	}
    	
    	else if( arr[mid] > x)
    	{
    		hi = mid -1;
    	}
    	
    	else
    		lo = mid+1;
    }

    cout<<ans<<endl;
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}