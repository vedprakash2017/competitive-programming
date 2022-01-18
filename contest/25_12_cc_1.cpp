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
    ll min1 = 1e9 , max2 = -1e9, max1 = -1e9;
    
    for(int i=0;i<n;i++)
    {
    
    	cin>>x;
    
    	if(x >= max1)
    	{
    		max2 = max1;
    		max1 = x;
    	}
    	else if( x> max2)
    	{
    		max2 = x;
    	}
    	if(x<min1)
    		min1 = x;
    
    }

    // cout<<max1<<min1<<" "<<max2<<endl;
    cout<<(max1 - min1)*max2<<endl;
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}