#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;
lli n,x,c;
vector<int> temp;

void solve()
{
	c = 0;
    cin>>n>>x;
    temp.clear();
    temp.resize(n);
    for (lli i = 0; i < n; ++i)
    {
        cin>>temp[i];
    }
    sort(temp.begin(),temp.end());
    for (int i = 0; i < n; ++i)
    {
    	int t=0;
    	t += upper_bound(temp.begin(),temp.end(),x-temp[i]) - temp.begin();
    	if(x-temp[i]>=temp[i]) t--;
    	c+=t;
    }
    cout<<c<<endl;
}

signed main()
{
    IOS
    lli t;cin>>t;while(t--)
    solve();
}