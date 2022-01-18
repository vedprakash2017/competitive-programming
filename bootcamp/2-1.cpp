#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

void solve()
{
    string s1,s2;

    cin>>s1>>s2;

    vector< int > freq(26, 0 );

    if(s1.size()< s2.size())
    {
        string temp = s1;
        s1 = s2;
        s2 = temp;

    }

    for( int i = 0; i< s1.size(); i++)
    {
        freq[s1[i] - 'a']++;
    }

    for( int i = 0; i< s2.size(); i++)
    {
        freq[s2[i] - 'a']--;
    }
    for (int i = 0; i < 26; ++i)
    {
        if(freq[i] >0)
        {
            cout<<"N"<<endl;
            return ;

        }
    }
    cout<<"Y"<<endl;
    
}

signed main()
{
    IOS
    ll t;cin>>t;while(t--)
    solve();
}