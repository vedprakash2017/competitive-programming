#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>


bool check(char i, char j)
{
	if( (i=='0'&& j=='0') || (i=='2'&&j=='5') || (i=='5'&&j=='0') || (i=='7'&&j=='5'))
		return 1;
	return 0;
}

void solve()
{
	string s;
	cin>>s;
	ll n = s.size();
	ll k = 0;

	for(ll i = n-1; i>=1; i--)
	{
		if(check( s[i-1], s[i]))
			break;

		if( check( s[i-2], s[i-1]) || check( s[i-2], s[i]))
			{k++; break;}


		k++;
		
		if( s[i] == '0' || s[i] == '5')
		{
			char c = s[i];
			s.pop_back();
			s.pop_back();
			s.push_back(c);	

		}
		else
			s.pop_back();
	}

	cout<<k<<endl;
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}



	// ll i = n-1,j = n-1;

	// while(j>0)
	// {
	// 	while( s[j]!='5' && j>0)
	// 	{
	// 		j--;
	// 	}
	// 	if(j<=0) break;
	// 	ll cnt;
	// 	j--;
	// 	cnt = j>=0?j+1:0;	
	// 	while(j>=0 && ( s[i] != '2' || s[j] != '7') ) 
	// 	{
	// 		j--;
	// 	}

	// 	k = cnt+1;
	// 	break;
	// }

	// while(i>0)
	// {
	// 	while(s[i]!='0' && i>0)
	// 	{
	// 		i--;
	// 	}
	// 	if(i<=0) break;
	// 	ll cnt;
	// 	i--;
	// 	cnt = i>=0?i+1:0;	

	// 	while( i>=0 && ( s[i] != '5' || s[i] != '0') ) 
	// 	{
	// 		i--;
	// 	}
	// 	k = cnt - i +1;
	// 	break;
	// }	
