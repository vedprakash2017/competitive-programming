#include <bits/stdc++.h>

using  namespace std;

#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define vl vector<ll>   
#define vpl vector<pair<ll,ll>>
#define vvl vector<vl>
#define pl pair<ll,ll>
#define mpl map<ll,ll>
#define umpl unordered_map<ll,ll>
#define umpcl unordered_map<char,ll>
#define pb push_back
#define F first
#define S second
#define Mod 1e9+7
#define fr(i,str,n) for(int i = str; i < n; i++)
#define all(x,i,j) (x).begin()+i,(x).end()+j
#define pp pop_back
#define N 
#define M

void solve()
{
	ll n;
	cin>>n;
    set<int> ss;
    int a,b;
    for(int i=0;i<n;i++)
    {
    	cin>>a>>b;
    	
    	// cout<<n<<i<<endl;
    	// cout<<n<<a<<"num"<<b<<endl;    	
    	
    	if(a==1)		
    		ss.insert(b);
    	else
    	{
    		if(ss.empty())
    			{
    				cout<<b<<endl;
    				continue;
    			}

    			auto j = ss.lower_bound(b);
    			if(j == ss.end())
		    	{

		    		// cout<<*ss.rbegin()+1<<endl;
		    	}
		    	else
		    	{
			    	int m = *j;
			    	while( ss.find(m)!=ss.end() )
			    		{
			    				m++;
			    		}
		    		cout<<m<<endl;
    			}

   		 }
	}
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}