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

ll n,m;
vl g[100100]; 
int vis[100100];
bool found = 1;
int color[100100];
void dfs(int node, int v)
{
    vis[node] = 1;
    color[node]  = v;
    for(auto i:g[node])
    {
        if(vis[i] == 0) 
            {
                dfs(i,3-v);
            }
        if(color[i] == color[node])
        {
            found  = 0;
            return;
        }
    }
}
void solve()
{
    cin>>n>>m;
    int x,y,i;
    fr(i,0,m)
    {
        cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
    }

    fr(i,1,n+1)
    {
        if(vis[i] == 0)
        {
            dfs(i,1);
        }
    }
    if(found)
        cout<<"YES";
    else
        cout<<"NO";

}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}