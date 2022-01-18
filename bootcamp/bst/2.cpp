#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

void solve()
{

int n;

cin>>n;

double c1,c2,c3;
c1=0; c2=n;

while (  (c2-c1)>=0.000001)
{
		c3 = (c1+c2)/2;
		if( c3*c3 == n)
		{
			cout<<c3;
			break;
		}
		else if( c3*c3 < n)
		{
			c1 = c3;
		}
		else
			c2 = c3;
}
cout<<" Square root of the number is"<<c3;


}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}	