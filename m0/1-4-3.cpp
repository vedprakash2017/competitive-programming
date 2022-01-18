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

void pr(multiset <int> ms)
{
	for(auto i:ms)
		cout<<i<<" ";
}

void solve()
{
    // cin>>n;
    
    multiset <int> ms;
    ms.insert(3);
    ms.insert(2);
    ms.insert(5);
    ms.insert(0);

    pr(ms); cout<<endl;
    cout<<ms.count(2)<<endl;

    ms.erase(ms.find(2));
	pr(ms); cout<<endl;

}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}