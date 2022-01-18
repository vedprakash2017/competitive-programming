#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

void solve()
{
    cin>>n;
    vector<ll> arr(n,0);
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        while(arr[i]>n)
        {
        	arr[i] = arr[i]/2;
        }
        cout<<arr[i]<<" ";
    }
    
    ll j = 1;
    
    sort(arr.begin() , arr.end());

    for(ll i = 0; i<n;i++)
    {
    	if(arr[0] != j)
    	{
    		cout<<"NO"<<endl;
    		return;
    	}
    	j++;
    }
    cout<<"YES"<<endl;
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}