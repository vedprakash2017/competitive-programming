#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

bool vis[1010][1010];
ll n,m;

pair<int,int> fn( int posi )
{
	if(posi == 0)
	{
		return { 1 , n };
	}
	else if( posi == 1)
	{
		return { -1 , m };
	}
	else if( posi == 2)
	{
		return { -1 , n };
	}
	else
	{
		return { 1 , m};
	}
}

void solve()
{
    cin>>n>>m;
    ll arr[n][m];
    for(int i=0;i<n;i++)
    {
    	for(int j = 0; j<m;j++)
        	{
        		vis[i][j] = 0;
        		cin>>arr[i][j];
    		}
    }

    int posi  = 0;
    int sign = 0,dir = 0;

    for(int i=0;i<n*m;i++)
    {
    	{sign,limit} = fn(posi);
		
		for(int j = 0; j<limit; j++)
		{

		}	
    }
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}	