#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;
lli n;
vector<int> temp;

struct mdq
{
	deque <int> dq;
	void insert(int x)
	{
		while(!dq.empty() && dq.back() < x)
		{
			dq.pop_back();
		}
		dq.push_back(x);
	}
	void remove( int x)
	{
		if(x == dq.front())
		dq.pop_front();
	}
	lli get_max()
	{
		return dq.front();
	}
};

void solve()
{
	int k,x;
    cin>>n>>k;
    mdq q;
    temp.clear();
    temp.resize(n);
    for (int i = 0; i < n; ++i)
    {
    	cin>>temp[i];
    }
    for (lli i = 0; i < n; ++i)
    {
    	q.insert(temp[i]);
        if(i-k>=0)
        {
        	q.remove(temp[i-k]);
        }
        if(i>=k-1)
        {
        	cout<<q.get_max()<<" ";
        }
    }
    cout<<endl;
}

signed main()
{
    IOS
    lli t;cin>>t;while(t--)
    solve();
}


// other way
ll n;
void solve()
{

    deque<int> dq;
    ll k;
    cin>>n>>k;
    ll arr[n] ={};
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if( dq.empty() || dq.back() > arr[i])
        {
            dq.push_back(arr[i]);
        }
        else
        {
            while(!dq.empty() && dq.back() < arr[i])
             {   
                dq.pop_back();
            }
            dq.push_back(arr[i]);
        }

        if(i>=k-1)
        {
            cout<<dq.front()<<" ";
            if(dq.front() == arr[i-k+1])
                dq.pop_front();
        }
    }
    cout<<endl;
}