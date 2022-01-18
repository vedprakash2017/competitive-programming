#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

void solve()
{
	string s;
	int x,y, ans = 0,fact,i = 0 , a = 1;
	cin>>s>>x>>y;
	string f;
		if(x>y)
		{
			f = "ab";
			fact = x;
		}
		else 
		{
				fact = y;
				f = "ba";
				a = 0;
		}
	// int n = s.size()-1;
	
	while(i< s.size())
	{
		while( i+1 < s.size() && s[i] == f[0] && s[i+1] == f[1])
		{
				s.erase(s.begin()+i, s.begin()+i+2);
				ans+=fact;
				i--;
		}
		i++;
	}
	i = 0;

	if(a) fact = y;
	else fact = x;
	
	while(i< s.size())
	{
		while( i+1 < s.size() && s[i] == f[1] && s[i+1] == f[0])
		{
				s.erase(s.begin()+i, s.begin()+i+2);
				ans+=(fact);
				i--;
		}
		i++;
	}
	cout<<ans<<"\n";
}

signed main()
{
    IOS
    int t;cin>>t;while(t--)
    solve();
}	