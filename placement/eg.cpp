#include <bits/stdc++.h>

using  namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pl pair<ll,ll>

ll solve( string s)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    int freq[26];

    for(int i = 0; i< s.size();i++) {
            if(s[i] <= 122) {
                if(s[i] >= 97) 
                    freq[(s[i]-97)]++;   
            }        
        }

        sort(freq, freq+26);
        // reverse the array
        for(int i=0;i<26/2;i++) {
             // swap the elements
             int temp = freq[i];
             freq[i] = freq[26-(i+1)];
             freq[26-(i+1)] = temp;
        }
        int result = 0;
        int count = 26;
        for(int i=0;i<26;i++) {
            if(freq[i]>0) 
                result += freq[i]*count;
            else 
                break;
            count--;    
        }
        return result;
}

signed main()
{
    IOS
    string s;
    while(cin>>s)
    cout<<solve(s)<<"\n";
}