#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;
void solve()
{
	cin>>n;
	vector< pair<int,int>> vec(n);

	for(int i=0; i<n;i++)
	{
		cin>>vec[i].first>>vec[i].second;
	}
	sort(vec.begin(), vec.end());

	int s = vec[0].first , e = vec[0].second;



	for (int i = 1; i < n; ++i)
	{
		if( vec[i].first <= e)
		{
			e = max( e, vec[i].second); // important step please take care
			continue;
		}	
		else
		{

			cout<<s<<" "<<e<<"\n";
			s = vec[i].first;
			e = vec[i].second;	
		}

	}
	cout<<s<<" "<<e<<endl;
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}