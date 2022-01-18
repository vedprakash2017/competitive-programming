#include <bits/stdc++.h>
// this works with the repeation array also 
using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

void solve()
{
    ll n,t,ans = 0;
    cin>>n>>t;
    
    vector<int> arr(n,0);
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr.begin() , arr.end());
    for(int j = 1; j<n;j++)
    {
    	ll i = 0, k = n-1;
    	while(i<j && k>j)
    	{
    		if( arr[i]+arr[j]+arr[k] == t )
    		{
    			ll ci = i, ck = k;
    			
    			while( ci < j  &&  arr[ci] == arr[i] )
    			{
    				ci++;
    			}
    			while( ck > j &&  arr[ck] == arr[k] )
    			{
    				ck--;
    			}
    			
    			ans += (ci - i)*(k - ck);
    			
    			i  = ++ci;
    			k = --ck;
    		
    		}
    		else if( arr[i]+arr[j]+arr[k] < t )
    		{
    			i++;
    		}
    		else
    		{
    			k--;
    		}
    	}
    }

    cout<<ans;
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}