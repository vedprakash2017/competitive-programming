#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

int fn( vector<int> arr)
{
	int sum = arr[0] , prev = sum;
	for(int i = 1; i<arr.size(); i++)
	{
		if( prev+1 <arr[i])
		{
			prev = arr[i];
		}
		else
			prev += 1;

		sum+=prev;
	}
	return sum;
}
void solve()
{
    cin>>n;
 	vector<int> ar(n);   
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    cout<<fn( ar);
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}