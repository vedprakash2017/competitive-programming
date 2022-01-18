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
    cin>>n;
    int x;
    priority_queue <int, vector<int>, greater<int> > pq;
    // if(n == 1) {cout<<0; return;}
    for(int i=0;i<n;i++)
    {
    	cin>>x;
    	pq.push(x);
    }	

    ll cost = 0;

    while(pq.size()>1)
    {
    	int q1 = pq.top();
    	pq.pop();

    	int q2 = pq.top();
    	pq.pop();

    	cost+=q1+q2;
    	pq.push(q1+q2);
    }
    cout<<cost<<"\n";
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}