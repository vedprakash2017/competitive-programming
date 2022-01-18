#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;
lli n;
vector<int> temp;

void solve()
{
    cin>>n;string s; int y;
    stack <lli> s1,s2;
    for (lli i = 0; i < n; ++i)
    {
    	cin>>s;
        if(s == "push")
        {
        	cin>>y;
        	s1.push(y);
        }
        else if(s == "pop")
        {
        	while(!s1.empty())
        	{
        		s2.push(s1.top());s1.pop();
        	}
        	cout<<s2.top()<<endl;
        	s2.pop();
        	while(!s2.empty())
        	{
        		s1.push(s2.top());s2.pop();
        	}

        }
        else
        {
			while(!s1.empty())
        	{
        		s2.push(s1.top());s1.pop();
        	}
        	cout<<s2.top()<<endl;
        	while(!s2.empty())
        	{
        		s1.push(s2.top());s2.pop();
        	}        	
        }
    }
}

signed main()
{
    IOS
    lli t;cin>>t;while(t--)
    solve();
}