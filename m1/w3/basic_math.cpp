#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;


int gcd(int a,int b)
{
	if( a%b == 0 ) return b;

	return (b, a%b);

}

bool prime( int n)
{
	if(n<2) return 0;

	for(int i=2;i*i<=n;i++)
		if(n%i == 0) return 0;

	return 1;
}

vector<int> divisors(int n)
{
	vector<int> ans;

	for (int i = 1; i*i <= n; ++i)
	{
	
	if( n%i == 0 )
	{
		ans.push_back(i);
		cout<<i<<" ";

		if( i*i!= n )
		{
			ans.push_back(n/i);
			cout<<n/i<<" ";
		}
	}
	
	}
	cout<<endl;
	return ans;
}


vector< pair<int,int> >  factor( int n)
{

	vector < pair<int,int> > ans;

	if(n<2) return ans;

	for (int i = 2; i*i <= n; ++i)
	{
		if( n%i == 0 )
		{ ll cnt = 0;
			while( !n%i)
			{
				cnt++;
				n =n/i;
			}
			ans.push_back({i,cnt});
			cout<<i<<" "<<cnt<<"   ";
		}
	}
	if(n>1) 
	{
		cout<<n;
		ans.push_back({n,1});
	}
	cout<<endl;
	return ans;

}

vector< ll >  prime_seive(int n)
{
	cout<<n;
	vector< ll > ans;
	
	int arr[n+1];

	for (int i = 0; i <=n; ++i)
	{
		arr[i] = 1;
	}
	
	arr[0] = 0;	
	for (int i = 2; i < n; ++i)
	{
		if( arr[i] == 1)
		{
			for(int j = 1ll*i*i; j<n; j = j+i)
			{
				arr[j] = 0;
			}
		}
	}
	// wants prime only
	for(int i = 2; i<=n;i++)
		if(arr[i]) 
		 ans.push_back(i);


	// to get seive array
	// for(int i = 2; i<=n;i++)
	// {
	// 	 ans.push_back(arr[i]);
	// }
		return ans;
}

vector <ll> prime_range(ll a,ll b)
{

	ll bsize = sqrt(b);
	vector<ll> bb =  prime_seive( bsize);
	
	vector<ll> ans;

	ll arr[b-a+1];
	
	for (int i = 0; i < b-a+1 ; ++i)
	{
		arr[i] = i+a;
		// cout<<arr[i]<<" ";
	}

	for(auto i:bb)
	{
		ll st = ((a-1)/i+1)*i;
		for (int j = st; j <=b ; j+=i)
		{
			arr[j-a] = 0;
		}
	}

		cout<<endl;
	for (int i = 0; i < b-a+1 ; ++i)
	{
		if(arr[i]>0)
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	// for(int i=2; i-2 < bb.size();i++)
	// 	{
	// 		arr[i] = bb[i-2];
	// 	}

	return ans;
}

void solve()
{
    // cin>>n;
    // cout<<gcd(150,10)<<endl;
    // cout<<prime(n)<<endl;
    // divisors(n);
    // factor(n);
    // prime_seive(n);

    // a<1e12 so cant do in nlogn
    vector<ll> ans;
    ll a,b;
    cin>>a>>b;
    ans = prime_range(a,b);
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}