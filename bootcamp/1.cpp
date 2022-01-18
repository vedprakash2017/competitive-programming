#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

bool vis[1001][1001];
pair<int,int> dir( int v )
{
	if(v == 1 ) return { 0 , -1};
	else if(v == 2 ) return { 0 , 1};
	else if(v == 3 ) return { -1 , 0};
	else if(v == 4 ) return { 1, 0};
	else if(v == 5 ) return { +1 , -1};
	else if(v == 6 ) return { +1, +1};
	else if(v == 7 ) return { -1 , +1};
	else  return { -1 , -1 };


}
int cc = 0;
void dfs(vector<vector<int>> arr, int i , int j)
{
	if(i<arr.size() && j<arr[0].size() && i>=0 && j>=0)
		{
			// cout<<i<<j<<endl;
		cc++;
		vis[i][j] =1;
		}
	else
	{
		return;
	}

		// cout<<i<<j<<endl;
	pair<int,int> x;
	
	x = dir(arr[i][j]);
	
	dfs(arr, i+x.first, j+x.second );

}

int count_unvisited( vector<vector<int>> arr)
{



	for (int i = 0; i < arr[0].size(); ++i)
	{
			dfs( arr , 0,i);
	}

	int c = 0;
	for (int i = 0; i < arr.size(); ++i)
	{
		for (int j = 0; j< arr[0].size(); ++j)
		{
			if(vis[i][j] == 0)
			{
				c++;
			}
		}
	}	
	return c;
}



void solve()
{

	ll n, m;
	vector< vector<int>> arr;
    ll x;
    cin>>n>>m;
    arr.resize(n);
    for(int i=0;i<n;i++)
    {
    	for (int j = 0; j < m; ++j)
    	{
    		cin>>x;
    		arr[i].push_back(x);
    	}
    }

    cout<<count_unvisited( arr);
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}