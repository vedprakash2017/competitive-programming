#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>
ll n;

void merge( vector<int> &vec , int l1 , int h1 , int h2)
{
	int i = l1 , l2 = h1+1, j = l2;
	int n = vec.size();
	
	vector <int> ans;
	
	while( i<=h1 && j<=h2)
	{
		if(vec[i]<vec[j])
		{
			ans.push_back(vec[i]);
			i++;
		}
		else
		{
			ans.push_back(vec[j]);
			j++;
		}

	}

	while(i<=h1)
	{
		ans.push_back(vec[i]);
		i++;
	}
	while(j<=h2)
	{

		ans.push_back(vec[j]);
		j++;
	}

	int k = 0;

	for(int i = l1 ; i<= h2;k++, i++)
		vec[i] = ans[k];

}

void merge_s(vector<int> &vec , int l ,int h)
{	
	if(l ==h)
		return;

	int mid = (h+l)/2;

	merge_s(vec, l , mid);
	merge_s( vec, mid+1, h);
	merge( vec, l , mid , h );
}

void solve()
{
	cin>>n;
 	vector<int> vec(n,0);   
    
    for(int i=0;i<n;i++)
    {
    	cin>>vec[i];
    }
    
    merge_s( vec , 0 , vec.size()-1);

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