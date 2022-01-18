#include <bits/stdc++.h>

// find 1st one? so maintain the ans  = mid if arr[mid] == 1 as its a potential ans. and search in lo = mid+1
// if wants to find 1st 0 then in arr[mid] == 0 means save as potential ans then move to hi = mid -1
// dont include mid in lo and hi 
// ans = default value if not getting answer
// use lo+(hi-lo)/2 for o=avoide overflow
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
	    
// find last 1
    ll  ans = -1, lo = 0, hi = n-1 , mid;

    while(lo<= hi)
    {
    	mid = lo+ (hi-lo)/2;

    	if(arr[mid] == 0)
    	{
    		hi = mid -1;
    	}
    	else
    	{
    		ans = mid;
    		lo = mid+1;
    	}
    }

// find 1st 0  put ans = n means none 0 exist
    // ll  ans = n, lo = 0, hi = n-1 , mid;
	    
    // while(lo<= hi)
    // {
    // 	mid = lo+ (hi-lo)/2;

    // 	if(arr[mid] == 0)
    // 	{
    // 		ans = mid;
    // 		hi = mid -1;
    // 	}
    // 	else
    // 	{
    // 		lo = mid+1;
    // 	}
    // }

    cout<<ans<<endl;
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}