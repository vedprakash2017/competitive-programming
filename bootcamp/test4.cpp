#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

long lim_x , lim_y;

int dp[101][101];

bool fn( long long x , long long y)
{
    if( x>lim_x || y>lim_y) return 0;

    if(x == lim_x && y == lim_y) return 1;

    if(dp[x][y] != -1)
        return dp[x][y];

    bool ans = 0;

    if( x+y <= lim_x)
        ans += fn(x+y , y)?1:0;
    if(x+y <= lim_y)
        ans = fn(x , y+x)?1:0;

    return dp[x][y] = ans;
}


string solve( long long x , long long y)
{
    lim_x = x;
    lim_y = y;
    memset(dp , -1 ,sizeof(dp));

    if(fn( 1,1) )
    {
        return "yes";

    }
    else
        return "no";

}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    {
    
    ll x, y;
    cin>>x,y;

    cout<<solve(x,y)<<"\n";
    }
}