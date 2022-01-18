#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

string key[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
string ans;

void rec( string s , int i)
{

    if(i>= s.size())
    {
        cout<<ans<<"\n";
        return;
    }

    for(auto ch : key[s[i]-'0'])
    {
        ans.push_back(ch);
        rec(s , i+1);
        ans.pop_back();
    }
    return;


}

void solve()
{
	string s;
    cin>>s;
    
    rec(s ,0);
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}