#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

void solve()
{
	string s;cin>>s; n = s.size(); ll ans = 5;    
    for(int i=1;i<n;i++)
    {
    	if( (s[i] == 'N' && s[i-1] == 'S') || (s[i] == 'S' && s[i-1] == 'N') || (s[i] == 'E' && s[i-1] == 'W') || (s[i] == 'W' && s[i-1] == 'E'))
    		ans++;
    	else
    		ans+=5;
    }
 cout<<ans<<endl;   
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}