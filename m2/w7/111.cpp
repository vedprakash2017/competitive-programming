#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;
lli n,m;
vector<int> temp;

lli dp[100100];

lli rec(lli lvl)
{
    if(lvl >= n-3)    return abs(temp[n-1]-temp[lvl]);

    if(dp[lvl]!=-1) return dp[lvl];

    lli ans = 0;

    ans = rec(lvl+1)+abs(temp[lvl+1]-temp[lvl]);
    if(lvl<n-1)
    ans = min(ans, rec(lvl+2)+abs(temp[lvl+2]-temp[lvl]));
     return dp[lvl] = ans;

}

void solve()
{

    cin>>n;
    temp.clear();
    temp.resize(n);
    for (lli i = 0; i < n; ++i)
    {
        cin>>temp[i];
    }
    memset(dp,-1,sizeof(dp));

    cout<<rec(0)<<endl;

}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}