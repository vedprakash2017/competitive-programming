#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

void solve()
{
    ll k;
    cin>>n>>k;
    
    vector<int> arr(n,0);
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int num = n ,  ans = -1;
    
    int tail = 0, head = -1;
    int c = 0;
    while(tail<n)
    {

    	while( head+1<n && ( c<k || arr[head+1] == 1 ))
    	{
    		head++;
    		if(arr[head] == 0)
    		c++;
    	}

    	ans = max(ans, head - tail+1);
    	
    	if(tail<=head)
    	{
    	if( arr[tail] == 0) c--;
    		tail++;
    	}
    	else
    	{
    		tail++;
    		head = tail-1;
    	}
    }
    cout<<ans;
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}