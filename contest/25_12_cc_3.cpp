#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

void solve()
{
    cin>>n;
    string s;
    cin>>s;
    ll c1 = 0,  c0 = 0;
    for(auto i : s)
    {
        if( i  == '1')
            c1++;
        else
            c0++;
    }
    int x = min(c0 , c1);
    if(x == 0)
        cout<<0<<endl;
    else
    cout<<x-1<<endl;
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}