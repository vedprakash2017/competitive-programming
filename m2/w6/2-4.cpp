#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

void solve()
{
    ll x,y,ans = 0;
    cin>>n;
    vector <int> v1,v2;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        v1.push_back(x);
        v2.push_back(y);
    
    }

    vector <int> temp;
    temp  = v1;
    sort(v1.begin(), v1.end());
    x = v1[n/2];
    v1 = temp;

    temp  = v2;
    sort(v2.begin(), v2.end());
    y = v2[n/2];
    v2 = temp;

    for (int i = 0; i < n; ++i)
    {
    	ans += abs( x - v1[i] ) + abs( y- v2[i]);
    }

    cout<<ans<<"\n";
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}