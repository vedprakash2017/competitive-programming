#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

void selection(vector<int> &vec)
{
	for (int i = 0; i < vec.size(); ++i)
	{
		swap( vec[i] , *min_element( vec.begin()+i , vec.end() ));	
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
    
    selection( vec );

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