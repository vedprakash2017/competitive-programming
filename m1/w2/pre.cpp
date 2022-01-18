#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;
ll mod = 1e9+7;
void solve()
{
	// pre_sum

    ll q,x,y;
    cin>>n;

    cin>>q;
    ll p[n];
    p[0]  = 0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    	if(i)
        	p[i] = (mod+p[i-1]+arr[i])%mod;
    	else
    		p[0] = arr[0];
    }
    while(q--)
    {
    cin>>x>>y;
    --x;--y;
    int sec = x-1>=0?p[x-1]:0;
    cout<<(mod+p[y]-sec)%mod<<endl;
	}

	// par sum

	// cin>>n;

 //    int par[n] = {0};
 //    int arr[n];

 //    for(int i=0;i<n;i++)
 //    {
 //        cin>>arr[i];
 //   	}
 //    ll q,x,y,k;
 //    cin>>q;
 //    while(q--)
 //    {
	//     cin>>x>>y>>k;
	//     par[x] += k;
	//     if(y+1<n)
	//     	par[y+1] += -k;
	// }
	// arr[0] += par[0];
	// cout<<arr[0]<<" ";
	//     for(int i=0;i<n;i++)
 //    {
 //    	if(i)
 //    		{
 //    			par[i] = par[i-1]+par[i];
 //    			arr[i] += par[i];
 //    			cout<<arr[i]<<" ";
 //    		}
 //   	}



}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--
    solve();
}	