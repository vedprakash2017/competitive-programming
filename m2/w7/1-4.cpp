#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;

lli n,m,k;

int dp[2002][2002];
lli mod = 1e9+7;
int rec(lli lvl, lli d)
{

    if(lvl == n) 
        {
            if(d==k)
                return 1;
            return 0;
        }
    

    if(dp[lvl][d] != -1) return dp[lvl][d];

    lli ans = 0;
    // if(d>=k)
    ans = (ans+rec(lvl+1,d))%mod;
    if(d<k)
    ans = max(  ans , rec(lvl+1,d) + (m-1)*rec(lvl+1,d+1)  )%mod;

    return dp[lvl][d] = ans;

}

void solve()
{
    cin>>n>>m>>k;

    memset(dp,-1,sizeof(dp));
    
    cout<<(m*rec(1,0))%mod<<endl;
}

signed main()
{
    IOS
    lli t;cin>>t;while(t--)
    solve();
}