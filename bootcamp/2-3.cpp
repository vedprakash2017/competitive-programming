#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

void solve()
{
    ll x;
    cin>>n;
    string s;
    while(n>0)
    {
        s.push_back(char(n%26 + 'A'-1));
        n/=26;
    }
    
    reverse(s.begin(), s.end());
    cout<<s<<endl;
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}