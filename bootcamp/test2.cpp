#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

int isword(string sentence, string word)
{
	stringstream s(sentence);
	string temp;
	int c = 0;
	bool flag = 0;
	while (s >> temp) {
		if (temp.compare(word) == 0) {
			c++;
			flag = 1;
		}
	}
	if(flag)
		return c;
	else
		return -1;
}


vector< vector<int> > textQ( vector<string> sent, vector<string> que)
{

	vector< vector<int>> ans;
	vector <int> temp;

for (int j = 0; j < que.size(); ++j)
{
	int count = 0;
	int c = 1e9;
	for (int i = 0; i < sent.size(); ++i)
	{
			c = 1e9;
			string s;
			s = que[j];		
			string temp_str = "";
			
			for(int qq = 0; qq<s.size(); qq++)
			{
				if( qq != s.size()-1 && s[qq] != ' ')
				{
					temp_str.push_back(s[qq]);
					continue;
				}

				c = min(c , isword(sent[i] ,  temp_str));
				
				if(c == -1)
				{
					break;
				}
			}
			cout<<endl<<"c"<<c<<endl;
			if(c == -1)
				count++;
			else
				// for (int k = 0; k < c; ++k)
				// {
				// 	temp.push_back(i);
				// }

			cout<<"hello";
	}

	// if(count == sent.size())
	// 	{
	// 		temp.push_back(-1);
	// 	}

	// 	ans.push_back(temp);
	cout<<"hmm";
}
	// for(auto i: ans)
	// {
	// 	for(auto j:i)
	// 	cout<<j<<" ";
	// 	cout<<endl;
	// }
	return ans;
}
void solve()
{
	int n,m;
	cin>>n;
	vector<string> sent;
	string str;
	string x;
	getline(cin , x);
	for(int i= 0;i<n;i++)
	{
		getline( cin , str);
		sent.push_back(str);
	}

	cin>>m; vector<string> pharse;
	
	getline(cin , x);
	
	for(int i= 0;i<m;i++)
	{

		getline( cin , str);
		pharse.push_back(str);
	}
	cout<<sent[0]<<endl;

	textQ(sent, pharse);
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}