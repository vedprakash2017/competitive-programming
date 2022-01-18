#include <bits/stdc++.h>

using  namespace std;

#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define vl vector<ll>   
#define vpl vector<pair<ll,ll>>
#define vvl vector<vl>
#define pl pair<ll,ll>
#define mpl map<ll,ll>
#define umpl unordered_map<ll,ll>
#define umpcl unordered_map<char,ll>
#define pb push_back
#define F first
#define S second
#define Mod 1e9+7
#define fr(i,str,n) for(int i = str; i < n; i++)
#define all(x,i,j) (x).begin()+i,(x).end()+j
#define pp pop_back
#define N 
#define M

ll n;
void solve()
{
	cin>>n;
	int arr[n];
	map <int,int> mp;
	for(int i = 0;i<n;i++)
	{
		cin>>arr[i];
	}
	int ans = 0, left = 0;
	for(int i =0;i<n;i++)
	{
		while(mp[arr[i]] == 1) // it means number repating so you should put left pointer to where we remove that number
		{
			mp[arr[left]]--;
			left++;
		}
		mp[arr[i]]++;
		ans = max(ans, i-left+1);
	}

	cout<<ans<<"\n";
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}	