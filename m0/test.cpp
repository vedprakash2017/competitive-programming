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
    float x= 100;
    
    int c = 0; 
    
    float mar = 100.0 , sf = 0.86 , bf = 0.97, stb1 = 0.8 , stb2 = 0.75 , bts = 1.8, m = 2, a, b;
    
    a = (mar*stb1*bf*bts*sf )/100;
    a = pow(a,m)-1;
    
    b = (mar*stb2*bf*bts*sf )/100;
    b = pow(b,m)-1;
    // a= 0.1; b = 0.2;
    
    cout<<"factors  "<<a<<"  "<<b<<endl;

    if(a>0.05 && b>0.05)
    {

    while(x<1000.0) 
        {
            x= x+ x*a;
            c++;
            cout<<c<<" "<<x<<endl;
        }
        cout<<" after it"<<endl;
    while(x<10000.0) 
        {
            x= x+ x*b;
            c++;
            cout<<c<<" "<<x<<endl;
        }
    
    while(x<100000.0) 
        {
            x= x+ x*b;
            c++;
            cout<<c<<" "<<x<<endl;
        }
    }

        cout<<(c+1)/12<<"year and "<<c%12 ;
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}