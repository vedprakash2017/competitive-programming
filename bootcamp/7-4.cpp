#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;
ll arr[1001001];
int tree[4004004];

int build(int idx, int l , int r)
{
	if(l == r) return tree[idx] = arr[l];

	mid = l+(r-l)/2;

	build(l ,mid);
	build(mid+1,r);
	tree[idx] = tree[2*idx]
}
int update()
{
}


int query()
{

}
void solve()
{
    ll x;
    cin>>n>>q;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        for (int i = 0; i <4 ; ++i)
        {
        	tree[i+j] = 0;
        }
    }

    build( 1, 0 , n-1);

}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}