#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;
ll freq[1000100];

void solve()
{
    ll n,k,c= 0, ans = 1e9;    
    cin>>n;
    ll arr[n];
    set<ll> s;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        freq[arr[i]]  = 0;
        s.insert(arr[i]);
    }
    
    k = s.size();    
    
    ll head = -1 , tail = 0;

     while(tail<n)
    {
    	while( head+1<n && ( c<k ))
    	{
    		head++;
    		freq[arr[head]]++;
        	if(freq[arr[head]] == 1) c++;
    	}	
    	if(c == k)
    		ans = min(ans, head-tail+1);
    	
    	if(tail<=head)
    	{
    		freq[arr[tail]]--;
    		
    		if(freq[arr[tail]] == 0) c--;
	    	
	    	tail++;

    	}
    	else
    	{
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
