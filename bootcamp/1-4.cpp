#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;
string ad( char a, char b)
{
	if(a== '0' && b == '0') return "0";
	else if(a=='1' && b== '1') return "0";
	else return "1";
}
void solve()
{
	string s1,s2,temp;
	cin>>s1>>s2;

	int i = s1.size()-1;
	int  j = s2.size() -1;
	int carry  = 0;
	vector<int> ans;
	while(i>=0 || j>=0 || carry)
		{
			if(i>=0)
			{
					carry+= s1[i] -'0';
					i--;
			}
			if( j>=0)
			{
					carry+= s2[j] -'0';
					j--;

			}
			ans.push_back( carry%2);
			carry =  carry/2;
		}
		reverse(ans.begin(), ans.end());
		for(auto i:ans)
		cout<<i;
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}	