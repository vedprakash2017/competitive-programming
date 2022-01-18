#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;
lli n;
vector<int> g[200100];
vector <int> temp;
int depth[200100];
int parent[200100];
lli d = 1;

void  dfs(int node,int par,int dep)
{
    parent[node] = par;
    depth[node] = dep;
    for(auto i:g[node])
    {
        if(i!=par)
            dfs(i,node,dep+1);
    }
}
lli cnt = 0;

void  dfs1(int node,int par,int dep,int cc)
{
    parent[node] = par;
    depth[node] = dep;

    if(depth[node]>=cc) 
        {
            cnt++;
        }
    for(auto i:g[node])
    {
        if(i!=par)
            dfs1(i,node,dep+1,cc);
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
    int maxd = 1;
    for (int i = 1; i <= n; ++i)
    {
    	if(depth[maxd] < depth[i])
    		maxd = i;
    }
    dfs(maxd,0,0);
    for (int i = 1; i <= n; ++i)
    {
    	if(depth[maxd] < depth[i])
    		maxd = i;
    }

    // dfs(1,0,0);

    d = depth[maxd];
    if(!(d%2))
    {
    	int c = d/2;
    	while(c--)
    	{
    		maxd = parent[maxd];
    	}
    	// cout<<maxd<<endl;

        temp.clear();
        lli c1 = 0, c2 = 0;
        for(auto i:g[maxd])
        {
            dfs1(i,maxd,0,d/2-1);
            temp.push_back(cnt);
            c1+=cnt;
            c2+=cnt*cnt;
            cnt = 0;
        }
        cout<<(c1*c1 - c2)/2;
    }
    else
    {

    	int c = d/2+1;int prev = maxd;
    	while(c--)
    	{
    		prev = maxd;
    		maxd = parent[maxd];

    	}
    	// cout<<prev<<" "<<maxd;	
        
        dfs1(prev,maxd,0,d/2);

        lli c1= cnt,c2 = 1;
        
        cnt = 0;
        dfs1(maxd,prev,0,d/2);
        c2 = cnt;

        cout<<((c1+c2)*(c1+c2) - (c1*c1 + c2*c2))/2;        
    }
}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}