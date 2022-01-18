#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>
ll n;

void quick(vector<int> &vec , int l ,int h)
{	
	if(l>=h || l<0 || h>=vec.size())
		return;

	int piv = vec[h];
	int j = l;

	for (int i = l; i < h; ++i)
	{
		if( vec[i] <= piv)
		{
			swap( vec[i] , vec[j]);
			j++;		
		}
	}
	swap(vec[j] , vec[h]);

	quick( vec, l , j-1);
	quick( vec, j+1, h);

}

void solve()
{
	cin>>n;
 	vector<int> vec(n,0);   
    
    for(int i=0;i<n;i++)
    {
    	cin>>vec[i];
    }
    
    quick( vec , 0 , vec.size()-1);

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