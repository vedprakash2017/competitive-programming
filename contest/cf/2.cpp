#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;

    ll d1 = c-b;
    ll d2 = (c-a)/2;
    ll d3 = b-a;
    
    
    if(b-d1>0 && (b-d1)%a == 0)
    {
        cout<<"YES"<<endl;return;
    }
    else if( (c-a)%2==0 && c-d2>0 && (c-d2)%b == 0)
    {
        cout<<"YES"<<endl;return;
    }
    if(b+d3>0 && (b+d3)%c == 0)
    {
        cout<<"YES"<<endl;return;
    }
    cout<<"NO"<<endl;
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}