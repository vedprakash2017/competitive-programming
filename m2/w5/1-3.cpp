#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;
lli n;
vector<int> temp;

void solve()
{
    cin>>n; lli k; temp.resize(n);
    cin>>k;
    for (lli i = 1; i <=n; ++i)
    {
    	temp[i-1] = i;
    }
    for (int i = 0; i < k-1; ++i)
    {
    	next_permutation(temp.begin(),temp.end());
    }
    for(auto i:temp)
    	cout<<i<<" ";
}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}