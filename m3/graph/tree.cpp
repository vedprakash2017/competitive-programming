#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;
lli n;
vector<int> g[100100];

int depth[100100];
bool leaf[100100];
int subs[100100];
int parent[100100];
int chilld[100100];

void dfs(int node, int par, int dep)
{
	parent[node] = par;
	chilld[node] = 0;
	subs[node] = 1;
	depth[node] = dep;

	for(auto i: g[node])
	{
		if(i!=par)
		{
			chilld[node]++;
			dfs(i,node,dep+1);
			subs[node]+= subs[i];
		}
	}
	if(chilld[node] == 0)
	{
		leaf[node] = 1;
	}

}

void solve()
{
	int x,y;

    cin>>n;
    
    for (lli i = 0; i < n-1; ++i)
    {
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1,0,0);
    cout<<leaf[3];
}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}