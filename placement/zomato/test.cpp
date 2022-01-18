#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define s1 second
int main()
{
	ll n, c=1, k =1, sum = 0;
	bool ans=false;
	cin>>n;

	stack<ll> s;ll arr[n+1];
	arr[0]=0;

	for(ll i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	
	for(ll i=k;i<=n;i++){

		if(s.empty())
			s.push(arr[k+1]);
		else
		{
			if(arr[i]>=arr[i-1])
			{

				if(arr[i]>=s.top())
				{
					if(i!=k+1)
					{
						c++;
					}
					s.pop();
					s.push(arr[i]);
					if( arr[i]>arr[k] )
					{
						k++;
						i=k;
						i--;
						s.pop();
						sum = sum+c;
						c=1;
					}
				}
			}

			if(i==n) 
			{
				sum = sum+c;
				c=1;
				k++;
				i=k;
				i--;
				s.pop();
				ans=false;
				if(k==n-1)
				{
					sum=sum+1;
					break;
				}
			}
		}
	}
		
	cout<<sum;
	return 0;
}