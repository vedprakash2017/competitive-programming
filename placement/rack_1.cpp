#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int

//1
ll solve( vector<ll> given_data)
{
	int curr = 0, sum = 0;
    for (int i=2; i<given_data.size(); i++)
    {
    	curr = (given_data[i]-given_data[i-1] == given_data[i-1]-given_data[i-2] )?(curr+1):0;
        sum+=curr;
    }
    return sum;
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    {
    	ll times, temp;
    	vector<ll> given_data;
    	cin>>times;
    	for (int i = 0; i < times; ++i)
    	{
    		cin>>temp;
    		given_data.push_back(temp);
    	}
    	cout<<solve(given_data)<<"\n";
	}
}

/*
// 2
ll solve( ll number)
{
	// base case
	if(number <= 0) return 0;  
    if(number == 1) return 1; 
    
    //pointers for 2, 3
    int multiple_2 = 0, multiple_3 = 0; 
    
    vector<int> k(number+1);
    k[0] = 1;
    
    for(int i  = 1; i <= number ; i ++)
    {
        k[i] = min(k[multiple_2]*2,k[multiple_3]*3);
        if(k[i] == k[multiple_2]*2) multiple_2++; 
        if(k[i] == k[multiple_3]*3) multiple_3++;
    }
    return k[number];
}

signed main()
{
    IOS
    
    // ll t;cin>>t;while(t--)
    
    {
    	ll given_number;
    	cin>>given_number;
    	cout<<solve(given_number)<<"\n";
	}
}

*/