#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

void solve()
{
    ll k;
    cin>>n>>k;
    vector<ll> ans(n,0);

    map<ll,ll> mp;

    for(int i=0;i<n;i++)
    {
        cin>>ans[i];
    }

    ll head = -1, tail = 0, c = 0, mans = 0;
    
    while(tail<n)
    {
    	// move head as much as feasiable
    	while( head+1 < n &&  ( mp[ ans[head+1] ] >0 ||  c<k)) // if distinct number count(c) <= k or number already in the map 
    	{ 
    		head++;
    		mp[head]++;
    		if(mp[head] == 1) c++;
    	} 
    	
    	// ans update
    	mans += head - tail+1;

    	// move tail
    	if(tail<=head)
    	{
    		if(mp[tail] == 1) c--;// if only one occ then we removing a distinct number so that dec c
    		mp[tail]--;
    		tail++;
    	}
    	else
    	{
    		tail++;
    		head = tail -1;
    	}

    }
    cout<<mans;
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}