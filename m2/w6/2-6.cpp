#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

void solve()
{
    int x;
    ll ans = 0;
    cin>>n;
    vector<int> v;
    int maxx = -1e9; 
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
        ans+=x;
        maxx = max(maxx, x);
    }
    v[n-1] = maxx;
    ans-=v[n-1];

    if(v[n-1] >= ans)
    {
    	ans = v[n-1] - ans;
    }
    else // didnt get it
    {
    	ans = (ans - v[n-1])%2;
    }
    cout<<ans<<"\n";
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}