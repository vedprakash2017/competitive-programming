//https://www.hackerearth.com/submission/57372343/
#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
 
signed main(){
	IOS
	ll n, counts=0,cnt=0;
	stack<pair<long,long>> st;
	
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	st.push({arr[0],1});
	
	for(int i=1;i<n;i++)
	{
	
	    cnt=1;
	    if(!st.empty())
	    {
             while(!st.empty())
        	 {
            	  if(st.top().first<arr[i])
              	{
                	counts+=(st.top().second);
                 	st.pop();
              	}
              	else if(st.top().first==arr[i])
              	{
                	counts+=(st.top().second);
                	cnt+=st.top().second;
                	st.pop();
              	}
              	else
              	{
                  	counts+=1;
                	break;
              	}
    		}
		 	st.push({arr[i],cnt});
	
		}
	    else
	    	st.push({arr[i],cnt});
	}

cout<<counts;
}