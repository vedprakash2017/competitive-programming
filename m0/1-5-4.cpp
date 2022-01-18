#include <bits/stdc++.h>

using namespace std;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

int main()
{
    ll n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++)
        arr[i] = i+1;
    do{
            for(auto i:arr)
            {
                cout<<i;
            }
            cout<<endl;
        }while(next_permutation(arr.begin(),arr.end()));
}