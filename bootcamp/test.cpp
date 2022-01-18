#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

void solve()
{
    ll s,x;
    cin>>n>>s;

    map <ll,ll> mp;
    bool ans = 0;
    
    for (int i = 0; i < n; ++i)
    {
        cin>>x;
    
        if(mp[s - x] > 0 && ans != 1)
        {
            ans = 1;
        }
        mp[x]++;
    }

    if(ans)
        cout<<"Y"<<"\n";
    else
        cout<<"N"<<"\n";
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}   