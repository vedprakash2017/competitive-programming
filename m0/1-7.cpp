#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;

void solve()
{
    string s;int c=0;
    cin>>s;
    stack <char> st;
    for(auto i:s)
    {
    	if(st.empty() && i==')')
    		{ c++; continue;}
    	if(!st.empty() && st.top()!= i ) {st.pop(); continue;}
    	st.push(i);
    }
    cout<<c+st.size()<<endl;
}

signed main()
{
    IOS
    lli t;cin>>t;while(t--)
    solve();
}