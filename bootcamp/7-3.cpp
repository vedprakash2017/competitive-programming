#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

void solve()
{
    cin>>n;
 	int arr[n];   
 	int ans = 1;
 	set<int> s; 

 	for(int i=0;i<n;i++)
    {
        cin>>arr[i];

        if(arr[i]>0)
        {
        	s.insert(arr[i]);
        }
    }

    if( s.empty()) 
    	{
    		cout<<1<<"\n";
    		return ;
    	}
    for(auto i : s)
    {
    	if(i == ans)
    		ans++;
    	else
    		break;
    }
    cout<<ans<<endl;
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}