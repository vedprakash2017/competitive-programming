#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

int anss( int x, deque <int> dqq)
{

}

void solve()
{
    ll x;
    cin>>n>>x;
    deque <int> dq;

    for(int i=0;i<n;i++)
    {
        cin>>x;
        dq.push(x);
    }
    
    for(int i = 0;i<m;i++)
    {
        cin>>x;
        pair<ll,ll> ans = anss(x,dq);
        cout<<ans.first<<" "<<ans.second<<endl;
    }
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}