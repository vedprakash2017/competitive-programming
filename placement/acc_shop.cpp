#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int

void solve()
{
	int m,l,n, price,level;
    string name;
    cin>>m>>l>>n;

    for(int i=0;i<n;i++)
    {
        cin>>name>>price>>level;
        cout<<name<<" "<<price<<"\n";
    }
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}