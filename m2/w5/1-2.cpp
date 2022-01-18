#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;
lli n = 0;
vector<int> temp;
string x[8];

bool check(int x,int y)
{
	for (int i = 0; i < temp.size(); ++i)
	{
		if(temp[i]==y || abs(x-i)==abs(y-temp[i])) return 0;
	}
	return 1;
}

void rec(int lvl)
{
	if(lvl == 8)
	{
		n++; return;
	}
	for (int i = 0; i < 8; ++i)
	{
		if(check(lvl,i) && x[lvl][i] !='*')
		{
			temp.push_back(i);
			rec(lvl+1);
			temp.pop_back();
		}

	}
}

void solve()
{
    for (lli i = 0; i < 8; ++i)
    {
	        cin>>x[i];
	}
	rec(0);
	cout<<n;
}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}