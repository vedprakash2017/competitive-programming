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
void solve()
{
	ll h,w;
    cin>>h>>w>>n;
    set <int> hei , width;
    multiset<int>  newh , neww;
    int x;
    	hei.insert(0);
    	hei.insert(h);
    	width.insert(0);
    	width.insert(w);

    	newh.insert(h);
    	neww.insert(w);

    for(int i=0;i<n;i++)
    {
    	char c;cin>>c;
    	if(c == 'H')
    	{
    		cin>>x;
    		hei.insert(x);
    		auto it = hei.lower_bound(x);
    		auto it1 = it; auto it2 = it;
    		it1--;it2++;
    		newh.erase(newh.find(*it2 - *it1));
    		newh.insert(x - *it1);
    		newh.insert(*it2 - x);

    	}
    	else
    	{
    		cin>>x;
    		width.insert(x);
    		auto it = width.lower_bound(x);
    		auto it1 = it; auto it2 = it;
    		it1--;it2++;
    		neww.erase(neww.find(*it2 - *it1));
    		neww.insert(x - *it1);
    		neww.insert(*it2 - x);


    	}

    	cout<<(*newh.rbegin())*(*neww.rbegin())<<"\n";
    }
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}