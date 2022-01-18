#include<bits/stdc++.h>
using namespace std;

bool check( int arr[] , int mid)
{
	if(arr[0] <= arr[mid])
		return 0;
	else
		return 1;
}

int solve( int arr[] , int n)
{
	int low = 0, high = n-1;
	int ans = 0;
	
	while( low <= high )
	{
		int mid = (high+low)/2;

		if( check( arr , mid ))
		{
			ans = mid;
			high = mid - 1;
		}
		else 
		{
			low = mid + 1;
		}
	}
		
		return arr[ans];

}

signed main()
{	
	int arr[7] = { 4,5,6,7,0,1,2 };
	cout<<solve( arr , 7 );
}