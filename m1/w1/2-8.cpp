#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

void solve()
{
	string s; 
	ll a, b; cin>>b>>a;
	bool check  = 0;
	map <int,int> mp;
	if(a<0 && b<0) 
		{
			check = 0;			
		}
		else if(a<0 || b<0)
		{
			check = 1;

		}
	a = abs(a); b = abs(b);

	if(check)
		s.push_back('-');

	bool dot = 0;
	
	s+= to_string(b/a);
	b = b%a;

	while( b!=0 )
	{

	
		if(dot == 0) 
			{  s.push_back('.'); s.push_back('(');dot = 1;}
	
		b*=10;

		if(mp[b%a] > 0 ) break;
		
		s+= to_string(b/a);
		mp[b%a]++;

		b = b%a;
	};

	if(dot) s.push_back(')');
	cout<<s<<endl;

}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}