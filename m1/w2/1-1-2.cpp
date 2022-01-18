#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

void solve()
{
    ll n,k,q;
    cin>>n>>k>>q;;
    ll par[n+1] = {0};
    ll ans[n+1] ={0};
    ll x,y;
 
    for(int i=0;i<n;i++)
    {
    	cin>>x>>y;
    	--x;
    	--y;
    		par[x] +=1;

    	if(y+1<n)
    		par[y+1]-=1;

    }
    

    if(par[0]>=k)
    	ans[0] = 1;
    
    for(int i=1;i<n;i++)
    {
    		par[i] = par[i-1]+par[i];
    		if(par[i]>=k)
    			ans[i] = 1;
    		ans[i] = ans[i-1]+ans[i];
    }
    while(q--)
    {
    	cin>>x>>y; --x;--y;
    	ll sec  = x-1>=0?ans[x-1] :0;
    
   		cout<<ans[y] - sec<<endl;
    
    }
  
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}