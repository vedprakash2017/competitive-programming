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

ll n;

// bool comp( pair<ll,ll> &a, pair<ll,ll> &b)
// {
// 	return b.second>a.second;
// }

void solve()
{
    cin>>n;
    vector <pair<ll,ll>> v;
    int x,y;
    for(int i=0;i<n;i++)
    {
    	cin>>x>>y;
    	v.push_back({x,1});
    	v.push_back({y,-1});
    }
    sort(v.begin(),v.end());
     ll curr = 0, ans = 0;
        for(int i=0; i<2*n-1; i++){
            curr += v[i].second;
            ans = max(ans, curr);
        }
    cout<<ans<<"\n";
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}