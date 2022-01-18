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
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    ll head = n-1, tail = 0;
    ll ans = 0;
    while(tail<= head)
    {
    	ans = max( ans, min( arr[tail] , arr[head] )*(head - tail));

    	if(arr[tail]<arr[head] )
    		tail++;
    	else
    		head--;
    }
    cout<<ans<<"\n";
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}