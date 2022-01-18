#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

ll gcd( ll a, ll b)
{
	if(b == 0 ) return a;
	return gcd(b,a%b);
}
void solve()
{
    cin>>n;
    ll a[n],b[n];

 	map< pair<ll,ll>,ll> mp;
    
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    }
    
    for(int i=0;i<n;i++)
    {
    	cin>>b[i];
    }
    // cout<<a[0]<<endl;
    int ans =0;
    
    for (int i = 0; i < n; ++i)
    {
    	if(b[i]==0 && a[i]==0) ans++;
    	else if(a[i]!=0)
    	{

    		ll c = gcd( a[i] , b[i] );
    		// cout<<i<<" "<<c<<endl;
    		// float c = 1;
    		mp[ {-b[i]/c , a[i]/c}]++;
    	
    	}
    }

 	ll maxx = 0;

    for(auto i:mp)
    {
    	maxx = max(i.second, maxx);
    }
    cout<<maxx+ans<<endl;
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}