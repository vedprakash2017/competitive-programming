#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

vector<ll> solve()
{	ll x1,x2,y1,y2;

    cin>>n;
    vector<ll> x, y;
    for(int i=0;i<n;i++)
    {
        cin>>x1>>y1>>x2>>y2;
        x.push_back(x1);        x.push_back(x2);
        y.push_back(y1);        y.push_back(y2);
    }
    sort(x.begin() , x.end());
    sort(y.begin() , y.end());
    return {x[n-1] ,  y[n-1]};
}

signed main()
{
    IOS
    ll t;cin>>t;  ll tt = t;while(t--)
    {
    	cout<<"Case #"<<tt-t<<": ";
    	vector<ll> ans = solve();
    	cout<<ans[0]<<" "<<ans[1]<<"\n";
	}
}