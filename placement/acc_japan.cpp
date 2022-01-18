// password

#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool check(string s){

    if(s.length()<4)return 0;
    
    map<int,int> mp;
    
    bool flag = 0;
    
    for(auto i : s){
    
        if(isdigit(i)){
            mp[i-'0']++;
            if(mp[i-'0']>=2)return 0;
            continue;
        }
        else {
            return 0;
        }
        
    }
     return 1;
}


signed main(){
    string s;
    cin>>s;
    bool ans = check(s);
    if(ans)cout<<"Accept"<<'\n';
    else cout<<"Reject"<<'\n';
}

// shop

#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int

void solve()
{
	int m,l,n, price,level;
    string name;
    cin>>m>>l>>n;

    for(int i=0;i<n;i++)
    {
        cin>>name>>price>>level;
        cout<<name<<" "<<price<<"\n";
    }
}

signed main()
{
    IOS
    // ll t;cin>>t;while(t--)
    solve();
}

// ivy

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