#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll gcd( ll a , ll b)
{
	if(a%b == 0) return b;

	return gcd(b , a%b);
}

void solve()
{
	ll n,x;
    cin>>n;

    set <ll> s;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s.insert(x);
    }
    vector<ll> ans;
    vector<ll> anss;
	anss.resize(ans.size());    

    for(auto i:s) ans.push_back(i);

    anss.push_back(ans[0]);

    for(int i = 1; i<ans.size(); i++)
    {

    	anss[i-1] = ans[i] - ans[i-1];

	}    	

	ll min = anss[0];
	
	for (int i = 0; i < anss.size()-1; ++i)
	{

		min = gcd(ans[i], min);
	}

    	// if( ans[i] - ans[i-1] <min)
    	// 	min = ans[i] - ans[i-1];


    if(min>1e6 || min<-1e6)
    	cout<<-1<<endl;
    else
    // {
    
    // for(int i = 1; i<ans.size(); i++)
    // {
    // 	if(ans[i] == ans[i-1]) continue;

    // 	if( ans[i] - ans[i-1] <min)
    // 		min = ans[i] - ans[i-1];
    // }

    cout<<min<<endl;
	
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}