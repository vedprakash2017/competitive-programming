#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

void bubble( vector<int> &vec)
{
	int n = vec.size(), j = n-1;
	
	for(int k = 0; k<n-1; k++)
	{
		for (int i = 0; i < j; ++i)
		{
			if(vec[i] > vec[i+1])
				swap(vec[i] , vec[i+1]);
		}
		j--;
	}
}

void solve()
{
    cin>>n;
 	vector<int> vec(n,0);   
    
    for(int i=0;i<n;i++)
    {
    	cin>>vec[i];
    }
    
    bubble( vec );

    for(auto i : vec)
    	cout<<i<<" ";

    cout<<endl;
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}