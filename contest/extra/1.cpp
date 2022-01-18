#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using lli = long long int;
lli n;
string temp;

int chk[51];

bool check()
{
	lli dep = 0;
	
	for(int i = 0; i<temp.size() && dep >=0;i++)
	{
		
		if(temp[i]=='(')
			dep++;
		else
			dep--;
	}
	if(dep==0)
		return 1;
	
	return 0;
}

void solve()
{
    cin>>n;
    temp.clear();

    temp.push_back('(');
     	   
    for (lli i = 0; i < n-1; ++i)
    {
     	   temp.push_back(')');
     	   temp.push_back('(');
    }

     	   temp.push_back(')');

    int c = 0;
    
    // if()

    while(c < n )
    {
    	if(check())
    	{
	    	for(auto i:temp)0
	    	{
	    		cout<<i;
	    	}
	    	cout<<endl;
	    	c++;
    	}
    	next_permutation(temp.begin()+1,temp.end()-1);
    }

}

signed main()
{
    IOS
    lli t;cin>>t;while(t--)
    solve();
}