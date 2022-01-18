#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;
lli n;
vector<int> temp;

void solve()
{
    lli x,y,q;
    cin>>n>>q;
    temp.clear();
    temp.resize(n);
    for (lli i = 0; i < n; ++i)
    {
        cin>>temp[i];
    }
    sort(temp.begin(),temp.end());
    for (int i = 0; i < q; ++i)
    {
        cin>>x>>y;
        if(x==1)
        {
            int a = lower_bound(temp.begin(),temp.end(),y)-temp.begin();
            if(a == n) cout<<"-1"<<" ";
            else cout<<temp[a]<<" ";
        }
        else if(x==2)
        {
            int a = upper_bound(temp.begin(),temp.end(),y)-temp.begin();
            if(a == n) cout<<"-1"<<" ";
            else cout<<temp[a]<<" ";
        }
        else if(x==3)
        {

            cout<<upper_bound(temp.begin(),temp.end(),y)-temp.begin()<<" ";
        }
        else
        {

            cout<<lower_bound(temp.begin(),temp.end(),y)-temp.begin()<<" ";
        }

    }   cout<<endl;
}

signed main()
{
    IOS
    lli t;cin>>t;while(t--)
    solve();
}