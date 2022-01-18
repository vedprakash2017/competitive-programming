#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(1);

char  A[5] = {'+','-','*','/','^'};

void solve()
{
	map<char,int> arr;

	for(int i= 0; i<5; i++)
		arr[A[i]] = i;
    string s;
    stack<char> s2;
    cin>>s;

    for(int i = 0;i<s.size();i++)
    {
    	if( int(s[i]) >= 'a' && int(s[i]) <= 'z')
    	{
            cout<<s[i];
    	}
        else if(s[i] == '(') 
        	{
        		s2.push('(');
        	}
        else if(s[i] == ')') 
        {
        	while(s2.top == '(')
        }
        else 
        { 
        	if( !s2.empty() && s2.size() > posi && arr[s[i]] < arr[s2.top()])
        	{
        		char x = s2.top();
        		cout<<s;
        		s2.pop();
        	}
        	else
        		s2.push(s[i]);
        }

    }
    while(s2.size()>0)
    {

    	cout<<s2.top();
    	s2.pop();
    
    }
    cout<<endl;
}
    
signed main()
{
    int t;cin>>t;while(t--)
    solve();
}