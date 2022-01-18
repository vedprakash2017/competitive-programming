#include <bits/stdc++.h>
using namespace std;
#define IOS sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

int main()
{
    ll n;
    cin>>n;
    vector<ll> ans;
    vector<ll> ans2;
    for(ll i =1;i*i <= n;i++)
    {
        if( n%i == 0)
        {
            ans.push_back(i);
            if(i*i!=n)
            {
                ans2.push_back(n/i);
            }
        }
    }
    for(ll i = ans2.size()-1;i>=0;i--) ans.push_back(ans2[i]);
    for(auto i:ans) cout<<i<<" ";
}