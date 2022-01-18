#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll dist(ll a, ll b)
{
    return a*a+b*b;
}

void solve()
{
    ll n,k , x,y;
    cin>>n>>k;

    priority_queue < pair< ll , pair<ll,ll> > > pq;
    for(ll i=0;i<n;i++)
    {
        cin>>x>>y;
        pq.push( {dist(x,y),{x,y}} );
        if(pq.size()>k)
            pq.pop();
    }

    vector < pair<ll,ll>> ans;

    while(!pq.empty())
        {
            auto it = pq.top();
            pq.pop();
            ans.push_back( { it.second.first , it.second.second} );
        }
        reverse(ans.begin(), ans.end());
    for(auto i:ans)
        cout<<i.first<<" "<<i.second<<"\n";
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}