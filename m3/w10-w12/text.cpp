#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

struct node
{
	int mii;

	node(int m = 1)
	{
		mii = m;
	}
};

node fnn( node &a)
{
	a.mii = 111;
	return a.mii;
}

void solve()
{
	// string  x;
	int x;
	while(cin>>x)
	{
		cout<<"seed == "<<x<<" or "<<endl;
	}
	// while(getline(cin,x))
	// {

	// 		string ans;
	// 	for(int i = 0; i<x.size();i++)
	// 	{
	// 		if(x[i] == '#')
	// 		{
	// 			ans.push_back(x[i+1]);
	// 			ans.push_back(x[i+2]);
	// 			ans.push_back(x[i+3]);
				
	// 			break;
	// 			// ans.append(x[i+2]);
	// 			// ans.append(x[i+3]);		
	// 		}
	// 	}
	// 	// int hm = stoi(ans);
	// 	cout<<ans<<endl;
	// 	// cout<<"seed == "<<ans<<" or "<<endl;
	// }
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}