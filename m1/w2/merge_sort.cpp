#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define ll long long int
#define pl pair<ll,ll>
#define int long long int
int merge(vector<int> &arr , int i, int is, int j,  int js)
{
	int inv = 0;
	int lower = i;
	int ans[js+1 -i];
	
	int k = 0;
	
	while( i<=is && j<= js)
	{
		if(arr[i]<=arr[j])
		{
			ans[k++] = arr[i++];
		}
		else
		{
			inv += is - i+1;
			ans[k++] = arr[j++];
		}
	}

	while(i<=is) ans[k++] = arr[i++];

	while(j<= js) ans[k++] = arr[j++];

	for(int q = 0;q<k;q++) 
	{
		arr[lower+q] = ans[q];
	}
	return inv;
}

int msort(vector<int> &arr , int l, int r)
{
	if(r<=l )  return 0;

	int mid = (l+r)/2;
	int inv = 0;
	inv+=msort(arr,l,mid);
	inv +=msort(arr,mid+1,r);
	inv +=merge(arr , l , mid, mid+1 ,r );

	return inv;
}

void solve()
{   int  n;
    cin>>n;
    
    vector<int> arr(n);
    
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    }
    cout<<msort(arr,0,n-1)<<endl;
}

signed main()
{
    IOS
    int t;cin>>t;while(t--)
    solve();
}