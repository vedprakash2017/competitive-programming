#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

void solve()
{
	ll m; 
	cin>>n>>m;
	int arr1[n] , arr2[m];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr1[i];
	}
	for (int j = 0; j < m; ++j)
	{
		cin>>arr2[j];
	}

	int i = 0, j = 0, mid = 0;
	ll value = 0;
	int  med = (n+m+1)/2 - 1;
	while( i<n && j<m && mid <= med)
	{
		if(arr1[i] > arr2[j])
		{
			value = arr2[j];
			j++;
		}
		else
		{
			value = arr2[i];
			i++;	
		}

		if( mid == med)
		{
			cout<<value<<endl; return;	
		}

		mid++;

	}
	mid--;
	while(i<n && mid < med)
	{
		mid++;
		value = arr1[i];
		i++;
	}

	while(j<n && mid < med)
	{
	
		mid++;
		value = arr2[j];
		j++;	
	}
	cout<<value<<"\n";
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}