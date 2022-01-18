#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;
ll x;
bool check( int a)
{
	return a>=x;
}

int binary_s( int arr[], int l,int h, bool check( int ))
{
	int lo = l, hi  = h;
	ll ans = -1,mid;
	while(hi>=lo)
	{
		mid = lo+(hi-lo)/2;

		if( !check(arr[mid]))
		{
			hi = mid-1;
		}
		else
		{
			ans = mid;
			lo = mid+1;
		}
	}
	return ans;
}

void solve()
{
    
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
     	cin>>arr[i];
    }
    x =arr[0];
    

    for(int i=0;i<n;i++)
    {
     	cout<<check(arr[i])<<" ";
    }

    cout<<binary_s(arr,0,n-1,check)+1;
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}