#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;
lli n;
vector<pair<string,int>> temp;

bool comp( pair<string,int> &a , pair<string,int> &b)
{
	return a.second<b.second;
}

void solve()
{
	temp.clear();
    cin>>n;
    string s;lli x;
    for (lli i = 0; i < n; ++i)
    {
		cin>>s>>x;
		temp.push_back(make_pair(s,x));        
    }
    sort(temp.begin(),temp.end(),comp);

    for(auto i:temp)
    {
    	cout<<i.first<<" "<<i.second<<endl;
    }
}

signed main()
{
    IOS
    lli t;cin>>t;while(t--)
    solve();
}