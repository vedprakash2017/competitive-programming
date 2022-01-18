#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n,c;
ll arr[10010];

bool check1( ll mid )
{
	return arr[mid]<=c;
}


ll bin_se( ll l , ll h, bool check(ll))
{
	ll ans = -1, mid;
	while(l<=h)
	{
		mid = l+(h-l)/2;
		if(check(mid))
		{
			ans = mid;
			l = mid+1;
		}
		else
		{
			h = mid-1;
		}
	}

	return ans;
}


void solve()
{
    cin>>n>>c;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool flag = 1;
    int lo = 0, hi = n-1;

    while(lo<=hi)
    {
    	ll mid = lo+(hi-lo)/2;

    	if( arr[mid] == c)
    	{
    		flag = 0;
    		break;

    	}
    	else if( arr[mid] > c)
    	{
    		hi = mid - 1;
    	}
    	else
    		lo = mid+1;
    }

    if(flag  == 1)
    {
    	cout<<-1<<"\n";
    	return;
    }

    ll i = bin_se(0 , n-1, check1);

    int j = i;
    
    while( j-1>=0 && arr[j-1] == arr[i])
    {
    	j--;
    }
    cout<<j+1<<" "<<i+1<<"\n";
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}