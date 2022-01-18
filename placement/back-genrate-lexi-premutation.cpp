#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;
map <int,int> mp;
vector<int> temp;
vector < vector<int>> all;

void rec( int lvl )
{
	if( lvl == n)
	{
		all.push_back( temp); 
		return;
	}

	for( auto &i : mp) // remeber to place & so that second value refelect there
	{
		if(i.second != 0)
		{
			i.second--;
			temp.push_back(i.first);
			rec(lvl+1);
			temp.pop_back();
			i.second++;
		}
	}
}

void solve()
{
    cin>>n;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        mp[x]++;
    }

    rec(0);
    
    for( auto i : all)
    {
    	for( auto j : i)
    	{
    		cout<<j<<" ";
    	}
    	cout<<endl;
    }
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}