#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;
lli n,k=0,given;
int check =1;

vector<int> temp;
map <int,int> mp;
void rec(lli lvl)
{
	if(lvl == n)
	{
		if(k == given-1)
		{
			check =0;
			for (int i = 0; i < temp.size(); ++i)
			{
				cout<<temp[i]<<" ";
			}
			return;
		}
			k++; 
			return; 
	}
	if(check ==1)
	for(auto &i:mp)
	{
		if(i.second!=0)
		{
			i.second--;
			temp.push_back(i.first);
			rec(lvl+1);
			temp.pop_back();
			i.second++;
		}
	}
}
void solve()
{
    cin>>n>>given;
    for (lli i = 0; i < n; ++i)
    {
        mp[i+1]++;
    }
    rec(0);
}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}