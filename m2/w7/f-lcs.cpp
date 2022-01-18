#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;

string s1, s2;

lli done[3001][3001];
string dp[3001][3001];

string rec(lli l1,lli l2)
{
	// cout<<l1<<l2<<endl;
	if(l1 == s1.size() || l2 == s2.size()) return "";

	if(done[l1][l2])
	{
		return dp[l1][l2];
	}

	if(s1[l1] == s2[l2]) 
		{
			string s(1,s1[l1]);

			s+= rec(l1+1,l2+1);
			done[l1][l2] = 1;
			return dp[l1][l2] = s;

		}

	string s1 , s2;
	s1 = rec(l1,l2+1);
	s2 = rec(l1+1,l2);

	string ans = s1.size()>=s2.size()?s1:s2;

	done[l1][l2] = 1;

	return dp[l1][l2] = ans;

}

void solve()
{

    cin>>s1>>s2;
    cout<<rec(0,0);
}

signed main()
{
    IOS
    // lli t;cin>>t;while(t--)
    solve();
}