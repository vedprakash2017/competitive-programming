#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

void solve()
{
	ll n,k,c= 0, ans = 0;
    
    cin>>n>>k;
    ll arr[n];
    
    map <ll , ll> mp;    
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    ll head = -1 , tail = 0;
    while(tail<n)
    {
    	while(head+1<n && c+arr[head+1] <=k )
    	{
    		head++;
    		c+=arr[head];
    		// cout<<head<<" "<<c<<" "<<arr[head+1]<<endl;
    	}

    	ans+=(head - tail+1);
    	// cout<<tail<<head<<" "<<ans<<endl;
    	if(tail<=head)
    	{
    		c-= arr[tail];
    		tail++;
    	}
    	else
    	{
    		tail++;
    		head = tail-1;
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