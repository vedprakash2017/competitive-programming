#include <bits/stdc++.h>

using  namespace std;

#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define Mod (ll)(1e9+7)
ll n;
void solve()
{
	string s;
    cin>>s;
    n = s.length();
    if(n == 1) { cout<<1; return;}
    ll dp[n+1], sum[n+1], last[26];
    dp[0] =1;
    sum[0] = 1;
    memset(last,0,sizeof(last));

    for(int i=1;i<=n;i++)
    {
    	dp[i] = sum[i-1];
    	if(last[s[i-1]-'A']>0)
    	{
    		int mm = last[s[i-1]-'A'];
			dp[i] = (dp[i] - sum[mm-1]+Mod)%Mod; 
    	}
    	sum[i] = (dp[i]+sum[i-1])%Mod;
    	last[s[i-1]-'A']  = i;
    }
    cout<<sum[n]<<"\n";
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}