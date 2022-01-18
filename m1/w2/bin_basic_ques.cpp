#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;
ll arr[1010];

ll x;
bool check_1( ll a)
{
	return arr[a] <= x;
}

bool check_2( ll a)
{
	return arr[a] >=arr[0];
}

bool check_3( ll a)
{
	if(a == 0) return 1;
	return arr[a]>arr[a-1];
}


bool check_partion_paint(ll a)
{
	ll p = 0, i = 0;

	while(i<n)
	{
		ll cc=a; 

		while( cc>=arr[i] && i<n)
		{
			cc = cc- arr[i];
			i++;
			// cout<<p<<" "<<arr[i]<<" "<<i<<" "<<cc<<endl;
		
		}
		p++;
	}

	return !(p<=x);
}

bool check_app_2(ll a)
{
	// if (a==0) return 
	ll pp = 0, i = 0;
	for(int i= 1;i<n;i++)
	{
		pp+= (((arr[i] - arr[i-1])-1+a)/a)-1;
	}

	return !(pp<=x);
}

ll binary( ll l, ll h, bool check(ll) )
{
	ll ans = -1, lo = l, hi = h, mid;

	while(lo<=hi)
	{
		mid = lo+(hi-lo)/2;

		if( check(mid) == 0)
		{
			// cout<<mid<<" ";
			hi = mid -1;
		}
		else
		{
			ans = mid;
			lo = mid+1;
		}
	}
	return ans;
}

void solve()
{
	// input for any ques
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	
	cin>>x;



	// 1st ques find x in arr

	// cout<<binary(0 ,n-1, check_1)+1<<endl;

	// 2nd question find how many times rotate only for distinct

	// cout<<binary(0, n-1 , check_2)+1<<endl;

	// 3rd biotonic array find peak

	// cout<<arr[binary(0 ,n-1 , check_3)]<<endl;

	// 4th find min time where we have n walls with given time and x painter

	// ll l  = 0, h = 0;
	// for (int i = 0; i < n; ++i)
	// {
	// 	l = max(arr[i] , l);
	// 	h+=arr[i];
	// }

	
	// cout<<binary( l, h , check_partion_paint)+1<<endl;

	// 5th k points put find min distance


	ll l  = 1, h = 0;

	for (int i = 0; i < n-1; ++i)
	{
		h = max(h,arr[i+1] - arr[i]);
	}
	for (int i = l; i <= h; ++i)
	{

		// cout<<i;
		cout<<check_app_2(i)<<" "<<endl;
	}

	cout<<binary( l, h , check_app_2)+1<<endl;

}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}