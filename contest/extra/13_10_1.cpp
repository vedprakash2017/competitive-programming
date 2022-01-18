#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

void solve()
{
	ll a,b,c,maxx;
	cin>>a>>b>>c; 
	maxx = max({a,b,c});

	if( a == maxx && b == maxx && c == maxx)
		cout<<1<<" "<<1<<" "<<1<<endl;	
	else if( a == maxx && b == maxx )
		cout<<1<<" "<<1<<" "<<maxx-c+1<<endl;	
	else if( b == maxx && c == maxx )
		cout<<maxx-a+1<<" "<<1<<" "<<1<<endl;	
	else if( a == maxx && c == maxx )
		cout<<1<<" "<<maxx-b+1<<" "<<1<<endl;
	else if( a== maxx)
		cout<<0<<" "<<maxx-b+1<<" "<<maxx-c+1<<endl;
	else if(b == maxx)
		cout<<maxx-a+1<<" "<<0<<" "<<maxx-c+1<<endl;
	else
	{
		maxx++;
		cout<<maxx-a<<" "<<maxx-b<<" "<<0<<endl;
	}	
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}