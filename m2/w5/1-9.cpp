#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;
lli n,a,b;
vector<int> ans;

bool isprime(int x)
{
	if(x<2) return 1;
	for(lli i = 2;i*i<=x;i++)
		if(x%i==0) return 0;
	return 1;
}
bool inrange(int x)
{
	if(x<a || b>x || !isprime(x)) return 0;
	return 1;
}

void getsum(lli lo,lli hi,lli multi)
{
	if(hi*multi+lo>b)
		return;

	for (int i = 0; i <=9; ++i)
	{
		if(inrange( (hi*multi+i)*multi+lo))
			ans.push_back((hi*multi+i)*multi+lo);
	}

	for (int i = 0; i < 10; ++i)
	{
		getsum( hi*multi+i,i*multi+lo,multi*10);
	}

}

void solve()
{
	cin>>a>>b;
    for (lli i = 1; i < 9; ++i)
    {
        if(inrange(i))
        	ans.push_back(i);
    }

    getsum(1,1,10);
    getsum(3,3,10);
    getsum(5,5,10);
    getsum(7,7,10);
    getsum(9,9,10);
    for(auto i:ans)
    {
    	cout<<i<<" ";
    }
}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}