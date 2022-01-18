#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

// its only saving the partial sum not cal the prefix some until xth posi

struct node
{
	ll val;

	node(ll v = 0)
	{
		val  = v;
	}
};

ll arr[100100];

node t[400400];

node merge( node &a , node &b) // because at some ques you need change a and b
{	
	return node(a.val+b.val);
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

void update(ll index, ll i, ll j, ll ig, ll jg,  ll v)
{

	if( ig>j || jg<i ) { return;}

	if(i == j ) 
		{
			node a= t[index];
			node b =node(v);
			t[index] = merge( b , a); 
			arr[i]  = t[index].val; 
			return;
		}
	
	ll mid = (i+j)/2;
	update(2*index, i , mid , ig,jg, v);
	update(2*index+1,  1+mid , j ,ig,jg, v);

	t[index] = merge(  t[2*index] ,  t[2*index+1]);
};

node query(ll index, ll i, ll j, ll ig, ll jg)
{
	node mm;

	if( ig>j || jg<i ) return mm;

	if( ig<=i && j<=jg) 
	{
		// cout<<i<<j<<ig<<jg<<"index:"<<index<<endl;
		return t[index];
	}

	ll mid = (i+j)/2;

	node a = query(2*index, i , mid , ig, jg);
	node b = query(2*index+1,  1+mid , j , ig, jg);
	
	node ans = merge( a , b);
	
	return ans;
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
    // ll q; cin>>q;
    for(int i=0;i<q;i++)
    {
    	ll ch; cin>>ch;
    	if(ch == 1)
    	{
    		ll ig,jg,v;
    		cin>>ig>>jg>>v;
    		update(1,0,n-1,ig-1,jg-1,v);
    	}
    	else
    	{
    		ll  x;
    		cin>>x;
    		// node ans = query(1,0,n-1,0,x-1);
    		// cout<<ans.val<<endl;
    		cout<<arr[x-1]<<"\n";
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