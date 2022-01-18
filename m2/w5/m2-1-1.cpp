#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;
lli n;
vector<int> temp;
vector<vector<int>> all;
map <int,int> mp;


void rec( int lvl)
{
	if (lvl == n)
	{
        all.push_back(temp); return;
	}
    for(auto &i:mp)
    {
        if(i.second != 0 )
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
    cin>>n;lli x;
    for (lli i = 0; i < n; ++i)
    {
    	cin>>x;
    	mp[x]++;
    }
    rec(0);
    for(auto i:all)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}