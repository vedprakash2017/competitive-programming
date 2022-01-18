#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

int gcd(int a,int b)
{
	if(b == 0 ) return a;
	return gcd(b, a%b);
}

void solve()
{
	cout<<"hello";
	cout<<gcd(3,15);
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}