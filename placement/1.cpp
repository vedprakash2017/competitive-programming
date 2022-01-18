#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

string solve()
{
    ll n,d,c,m;
    string s;
    cin>>n>>d>>c>>m;
    cin>>s; 
    
    for(int i=0;i<n;i++)
    {
    	if(s[i] == 'C')
    	{
    		c--;
    	}
    	else if(s[i] == 'D')
    	{	
    		if(d<=0 || c<0) return "NO";
    		
    			if(c>=0)
    				c= c+m;
    			d--;
    	}

    }
    return "YES";
}

signed main()
{
    IOS
    ll t;cin>>t;  ll tt = t;while(t--)
    {
    	cout<<"Case #"<<tt-t<<": ";
    	cout<<solve()<<"\n";
	}
}