#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

void solve()
{
	char x;
    cin>>n;
    
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s.push_back(x);
    }

    vector<int> idx;

    for(int i = 0;i<n;i++)
    {
    	if(s[i] == '1')
    		idx.push_back(i);
    }
    
    int ss = idx.size();

    ll cnt = 1;

    if( ss<=2) cout<<0<<"\n";
    else
    {
    	for(int i= 2; i <ss;i+=2)
    	{
    		cnt = cnt*(idx[i] - idx[i-1]);
    	}
    }

    cout<<cnt<<"\n";
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}