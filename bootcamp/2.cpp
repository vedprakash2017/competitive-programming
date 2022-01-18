#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>


//
float get_grip( vector<int> h , vector<int> l)
{
	float maxx = -1e9;
	int prev = 0;
	vector<int> pre(l.size());

	for (int i = 1; i < l.size(); ++i)
	{
		pre[i] +=l[i-1];
	}

	for (int i = 0; i < h.size()-1; ++i)
	{
		if(h[prev]<h[i+1])
		{
			maxx  = max(maxx,  sqrt( (float)pow(h[i+1] - h[prev] , 2) + (float)pow( (float)l[prev]/2 + (float)(pre[i] - pre[prev]) , 2)  ));
			prev = i+1; 
		}
	}
	return round(maxx*10)/10;
}




void solve()
{
    ll x;
	ll n;
	vector<int> h , l ;
    cin>>n;
    h.resize(n);
    l.resize(n);

    for(int i=0;i<n;i++)
    {
    	cin>>h[i];
    }
    for(int i=0;i<n;i++)
    {
    	cin>>l[i];
    }

	cout<<fixed<<setprecision(3)<<get_grip(h, l)<<endl;
}




signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}