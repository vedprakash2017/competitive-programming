#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

void prv( vector<int> ans)
{
		for (int i = 0; i < ans.size(); ++i)
		{
			cout<<i<<" "<<ans[i]<<" ";
		}
		cout<<endl;
}

void pra( ll  ans[], ll n )
{
	// ll s = sizeof(ans)/sizeof(ans[0]);
		for (int i = 0; i <n; ++i)
		{
			cout<<i<<" "<<ans[i]<<endl;
		}
		cout<<endl;
}

// n <= 1e6 and t <=1e6 find 1 - n all factors
void solve()
{
		cin>>n;
		ll arr[n+1];
		arr[0] = 0; arr[1] = 1;
		for(int i = 2;i<=n;i++)
		{
			arr[i] = i;
		}

		for(int i = 2;i<=n;i++)
		{
			if( arr[i] == i)
			{
				for (int j = 2*i; j <=n ; j+=i)
				{
					if(arr[j] == j)
					arr[j]  = i;
				}
			}
		}
			ll ans = 1;
		for (int i = 2; i <= n; ++i)
		{
			ll val = i;
			cout<<i<<" ";
			if(arr[i] == i)
					cout<<i;
			else
			while( val > 1)
			{
				
				 cout<<arr[val]<<" ";
				 val = val/arr[val];
			}
			cout<<endl;
		}

		// pra(arr,n);
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}	