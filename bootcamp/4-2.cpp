#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n,m;

void pr( int arr[], int size)
{
	for(int i = 0; i < size; i++)
	cout<<arr[i]<<" ";
	cout<<"\n";
}

void solve()
{
   cin>>n>>m;
   int arr1[n] , arr2[m] ;

   for (int i = 0; i < n; ++i)
   {
   	cin>>arr1[i];
   }

   for (int j = 0; j < m; ++j)
   {
   	cin>>arr2[j];
   }

   if( n == 0)
   {
   		pr(arr2 , m); return ;
   }
   if(m ==0 )
   {
   	pr(arr1 , n); return ;
   }

   int i = 0, j = 0;
   vector <int> ans;

   while(i<n && j<m)
   {
   		if(arr1[i]>arr2[j])
   		{
   			ans.push_back(arr2[j]);
   			j++;
   		}
   		else
   		{
   			ans.push_back(arr1[i]);
   			i++;
   		}
   }

   while(i<n)
   {
   	ans.push_back(arr1[i]);i++;
   }
   while(j<m)
   {
   	ans.push_back(arr2[j]);j++;
   }

   for(auto i:ans)
   	cout<<i<<" ";
   cout<<"\n";

}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}