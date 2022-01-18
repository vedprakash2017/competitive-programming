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
void solve()
{
        // int n,m;
        cin>>n>>m;
        set<int>a;
        while(n--){
            int x;
            cin>>x;
            a.insert(x);
        }
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            if(a.count(x)!=0){
                cout<<"YES\n";
            }
            else{
                a.insert(x);
                cout<<"NO\n";
            }
        }
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}