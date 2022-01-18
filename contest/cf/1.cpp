#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

void solve()
{
    cin>>n;
	vector <ll> arr(n,0);
	ll max = INT_MIN, min = INT_MAX;   
    for(int i=0;i<n;i++)
    {
        cin>>arr[0];
        if(max<arr[0])
        	max = arr[0];
        if(min>arr[0])
        	min = arr[0];
    }

    cout<<max-min<<endl;
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}