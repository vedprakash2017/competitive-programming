#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;


struct node
{
	ll val;
	node(ll v = 0)
	{
		val = v;
	}
};

ll arr[100100];

node t[400400];

node merge( node &a , node &b) // because at some ques you need change a and b
{	
	ll c= max( {a.val, b.val , a.val+b.val });
	return node(c);
}

void build(ll index, ll i, ll j)
{
	if(i == j) 
		{ t[index] = node(arr[i]); return;}

	ll mid =(i+j)/2;
	build(2*index, i , mid);
	build(2*index+1,  1+mid , j);
	t[index] = merge(t[2*index] , t[2*index+1]);
};

void update(ll index, ll i, ll j, ll x, ll v)
{

	if( x<i || x>j ) { return;}

	if(i == j ) { t[index] = node(v); return;} // leaf node cond.
	
	ll mid = (i+j)/2;
	update(2*index, i , mid , x, v);
	update(2*index+1,  1+mid , j , x, v);

	t[index] = merge(  t[2*index] ,  t[2*index+1] );
};

node query(ll index, ll i, ll j, ll l , ll r)
{
	node mm;
	if( l>j || r<i ) return mm;

	if( l<=i && j<=r  ) return t[index]; // range cond.

	ll mid = (i+j)/2;
	
	node a = query(2*index, i , mid , l, r);
	node b = query(2*index+1,  1+mid , j , l, r);
	
	node ans = merge( a , b);
	
	return ans;
	
}

void solve()
{
    cin>>n;   
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    build(1,0,n-1);
    ll q; cin>>q;
    for(int i=0;i<q;i++)
    {
    	ll ch; cin>>ch;
    	if(ch == 1)
    	{
    		ll x,v;
    		cin>>x>>v;
    		update(1,0,n-1,x,v);
    	}

    	else
    	{
    		ll  l, r;
    		cin>>l>>r;
    		node ans = query(1,0,n-1,l,r);
    		cout<<ans.val<<endl;
    	}

    }
    // cout<<t[1].val;
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}