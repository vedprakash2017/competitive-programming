#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll n;

int bin( vector<int> vec , int l , int h , int val)
{
    int ans = 0;
    while(l<=h)
    {
        int mid = (l+h)/2;
        
        if( vec[mid] > val)
        {
            ans = mid;
            h = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    return ans;
}

void insertion(vector<int> &vec)
{	
	for (int i = 1; i < vec.size(); ++i)
    {
        int temp = vec[i];
        int j = bin(vec,0 ,  i, temp );

        for(int k  = i; k>j; k--)
        {
            vec[k] = vec[k-1];
        }
        vec[j] = temp;
    }
}

void solve()
{
	cin>>n;
 	vector<int> vec(n,0);   
    
    for(int i=0;i<n;i++)
    {
    	cin>>vec[i];
    }
    
    insertion( vec );

    for(auto i : vec)
    	cout<<i<<" ";

    cout<<endl;
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}