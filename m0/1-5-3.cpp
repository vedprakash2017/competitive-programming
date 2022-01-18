#include <bits/stdc++.h>
#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
int main()
{
    IOS
    ll t,n,k;
    cin>>t;
    while(t--)
    {

    priority_queue <ll> pq;
        ll x;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            pq.push(x);
        }
        ll c = 0;
        while(k--)
        {
            x = pq.top();
            c+=x;
            pq.pop();
            pq.push(x/2);
        }
        cout<<c<<"\n";

    }
    return 0;
}