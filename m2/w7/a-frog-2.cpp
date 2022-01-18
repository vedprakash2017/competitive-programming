#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;
lli n,k;
vector<int> temp;

lli dp[100100];

lli rec(lli lvl)
{
    if(lvl >= n-k-1)    return abs(temp[n-1]-temp[lvl]);

    if(dp[lvl]!=-1) return dp[lvl];

    lli ans = INT_MAX;

    for (int i = 1; i <=k; ++i)
    {
        if(lvl<n-i)
            ans = min(ans,rec(lvl+i)+temp[lvl+i]-temp[lvl]);
    }
    return dp[lvl] = ans;

}

void solve()
{

    cin>>n>>k;
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