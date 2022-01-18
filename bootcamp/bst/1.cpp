#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n_rods; 
	cin>>n_rods;

	vector< int> rods( n_rods , 0);

	priority_queue <int> pq;

	for(int length = 0; length<n_rods; length++)
	{
		cin>>rods[length];
		pq.push(-rods[length]);
	}

	int ans = 0;
	if(n_rods<2)
	{
		cout<<ans<<endl;
		return;
	}

	do
	{
		int x,y;
		x = -pq.top();
		pq.pop();
		if(pq.empty())
			break;

		y = -pq.top();

		ans += x+y;

		pq.pop();
		pq.push(-(x+y));

	}
	while( !pq.empty());
	cout<<ans<<endl;
}

signed main()
{
	// int t; cin>>t; while(t--)
	solve();
}