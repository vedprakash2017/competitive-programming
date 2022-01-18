#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

void solve()
{
    int n,x;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    cout<<'+';
    for(ll i = 1; i<2n+2; i++)
    {
    	cout<<'-';
    }
    cout<<"\n";
    cout<<'|';
    for(ll i = 1; i<2n+2; i++)
    {
    	if(i%2 == 1)
    		cout<<'.';
    	else
    	{
    		if( i  == arr[i])
    			cout<<"v";
    		else if(i <= arr[i])
    			cout<<'x';
    		
    	}
    }
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}