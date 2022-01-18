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
 	vector<int> v1 , v2 ;   
    for(int i=0;i<n;i++)
    {
    	cin>>x;
        v1.push_back(x);
    }   
    for(int i=0;i<n;i++)
    {
    	cin>>x;
        v2.push_back(x);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    
    ll ans = 0;

    for(int i=0;i<n;i++)
    {
    	ans += abs(v1[i] - v2[i]);
    }
    cout<<ans<<"\n";
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}	