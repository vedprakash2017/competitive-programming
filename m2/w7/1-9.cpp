
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

ll n,m;
int dp[1010][1010];
vector< pair <ll , pair<int,int>> > g;

int dy[3] = {-1,0,1};

void solve()
{
    cin>>n>>m;
    int x;

    for(int i=0;i<n;i++)
    	for(int j=0;j<m;j++)
    	{
    		cin>>x;
    		g.push_back({x,{i,j}});
    		dp[i][j] = 0;
    		// d[i][j] = x;
    	}

    sort(g.begin(),g.end());
    
    for(auto i:g)
    {
    	dp[i.S.F][i.S.S] = 1;
    	for(int j=0;j<3;j++)
    	{
    		int y = dy[j]+i.S.S;
    		if(y<m && ( i.S.F + 1)< n)
    			dp[i.S.F + 1][y] = 0;
    	}
    }

    for(int i = 0;i<n;i++)
    {
    	for(int j = 0;j<m;j++)
    		cout<<dp[i][j]<<" ";
    	cout<<endl;
	}
	// cout<<endl;
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}