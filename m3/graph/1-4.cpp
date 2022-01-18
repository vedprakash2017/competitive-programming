#include <bits/stdc++.h>

using  namespace std;

#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb(i) push_back(i)
#define F first
#define S second
#define Mod 1e9+7
#define fo(i,n) for(int i = 0; i < n; i++)
#define loop(i,s,n,k) int i;for(int i = s; i < n; i+=k)
#define pob pop_back()
#define N 
#define M

ll n,m,k;

ll vi = 1;

vector <int> g[100100];
ll vis[100100];
ll si[100100];

int cnt = 1;

void dfs(int node)
{
    vis[node] = vi;
    for(auto i:g[node])
    {
        if(vis[i] == 0)
            {
                dfs(i);cnt++;
            }
    }
}
void solve()
{
    cin>>n>>m>>k;
    int x,y;
    int i;
    fo(i,m)
    {
        cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
    }
    loop(j,1,n+1,1)
    {
        if(vis[j] == 0)
        {
            dfs(j);
            si[vi] = cnt;
            cnt = 1;
            vi++;
        }
    }

    fo(i,k)
    {
        cin>>x;
        if(x==1)
        {
            cin>>y;
            cout<<si[vis[y]]<<endl;
        }
        else
        {
            cin>>x>>y;
            if(vis[x] == vis[y])
            {
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }
}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}   