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
    stack <int> s;
    s.push(0);
    int g[n] = {};
    
    for(int i=0;i<n;i++)
    {
		cin>>g[i];

		while(!s.empty() && g[s.top()] >= g[i] )
		{
			s.pop();
		}

		 if( s.empty())
		{
			cout<<0<<" ";
		}
		else
		{
			cout<<s.top()+1<<" ";
		}
		s.push(i);
    }
    cout<<endl;
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}