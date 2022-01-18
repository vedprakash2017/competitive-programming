#include <bits/stdc++.h>

using  namespace std;

#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define vl vector<ll>   
#define vpl vector<pair<ll,ll>>
#define vvl vector<vl>
#define pl pair<ll,ll>
#define mpl map<ll,ll>
#define umpl unordered_map<ll,ll>
#define umpcl unordered_map<char,ll>
#define pb push_back
#define F first
#define S second
#define Mod 1e9+7
#define fr(i,str,n) for(int i = str; i < n; i++)
#define all(x,i,j) (x).begin()+i,(x).end()+j
#define pp pop_back
#define N 
#define M

ll n;

// not working

vector<char> g[101][101];

void bfs01(char node)
{
	deque <char> dq;
	dq.push_back(node);

	while(!dq.empty())
	{
		ll n = dq.front();
		dq.pop_front();
		int i;
		fr(i,0,8)
		{
			ll x1 = dx[i]+node;
			ll x2 = dy[i]+node;

			if(check(x1,x2))
			{
				if(g[x1][x2] == '.')
				{

				}
			}
		}
	}
}

void solve()
{
    cin>>n;
    int i,j;
    fr(i,0,n)
    {
	    fr(j,0,n)
	    {
	    	cin>>g[i][j];	
	    }   	
    }

    bfs01('1');

}



signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}