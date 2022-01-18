#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

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
    
    	while(head+1 <n && ( c<k || mp[arr[head+1]]>0 ))
    	{
    		head++;
    		mp[arr[head]]++;
    		if(mp[arr[head]] == 1) c++;
    	}

    		ans += head - tail +1;

    	if(tail<=head)
    	{
    		if(mp[ arr[tail] ]-- == 1)
    		{
    			c--;
    		}
    		tail++;
    	}
    	else
    	{
    		mp[ arr[tail] ]--;
    		tail++;
    		head = tail - 1;
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