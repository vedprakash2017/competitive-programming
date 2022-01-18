//https://code.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/katrina-and-library-c2ed51f3/

#include<bits/stdc++.h>

using namespace std;
#define IOS ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
#define ll long long int

void solve()
{
    string s , ans;
    cin>>s;
    stack<char> st;
    for(int i = 0;i<s.size();i++)
    {
        if( s[i] == '/' || ( s[i] >= 'a' && s[i] <= 'z' ) )
        {
            
            st.push(s[i]);
               
        }
        else
        {
            string save;
            while(st.top()!='/')
            {
                save+=st.top();
                st.pop();
            }
            st.pop();
            for(int i = 0; i<save.size();i++)
                st.push(save[i]);
        }
    }

    while( !st.empty())
    {
        ans+=st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());

    cout<<ans<<"\n";
}

signed main()
{
    IOS
    // int t;cin>>t;while(t--)
    solve();
}