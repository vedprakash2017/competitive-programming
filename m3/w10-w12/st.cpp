#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

ll arr[100100];
ll t[400400];

void build(ll index, ll i, ll j)
{
	if(i == j) { t[index] = arr[i]; return;}

	ll mid =(i+j)/2;
	build(2*index, i , mid);
	build(2*index+1,  1+mid , j);
	t[index] = t[2*index]+t[2*index+1];
};

void update(ll index, ll i, ll j, ll x, ll v)
{
	if(i == j ) if( i == x) { t[index] = v; return;}

	if( x<i || x>j ) { return;}
	
	ll mid = (i+j)/2;
	update(2*index, i , mid , x, v);
	update(2*index+1,  1+mid , j , x, v);

	t[index] = t[2*index]+t[2*index+1];
};

ll query(ll index, ll i, ll j, ll l , ll r)
{
	if( l>j || r<i ) return 0;

	if(l<=i && r>=j) return t[index];

	ll mid = (i+j)/2;
	return query(2*index, i , mid , l, r) + query(2*index+1,  1+mid , j , l, r);

	// return t[index];
};

void solve()
{
	ll q;
    cin>>n>>q;   
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    build(1,0,n-1);
    
    for(int i=0;i<q;i++)
    {
    	ll ch; cin>>ch;
    	if(ch == 1)
    	{
    		ll x,v;
    		cin>>x>>v;
    		update(1,0,n-1,x-1,v);
    	}
    	else
    	{
    		ll  l, r;
    		cin>>l>>r;
    		cout<<query(1,0,n-1,l-1,r-1)<<endl;
    	}
    }
    // cout<<t[1];
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}