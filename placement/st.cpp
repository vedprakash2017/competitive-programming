//may be question

// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to find the maximum size
// of matrix with sum <= K
void findMaxMatrixSize(vector<vector<int> > arr, int K)
{

  int i, j;

  // N size of rows and M size of cols
  int n = arr.size();
  int m = arr[0].size();

  // To store the prefix sum of matrix
  int sum[n + 1][m + 1];

  // Create Prefix Sum
  for (int i = 0; i <= n; i++) {

    // Traverse each rows
    for (int j = 0; j <= m; j++) {

      if (i == 0 || j == 0) {
        sum[i][j] = 0;
        continue;
      }

      // Update the prefix sum
      // till index i x j
      sum[i][j] = arr[i - 1][j - 1] + sum[i - 1][j]
            + sum[i][j - 1] - sum[i - 1][j - 1];
    }
  }

  // To store the maximum size of
  // matrix with sum <= K
  int ans = 0;

  // Traverse the sum matrix
  for (i = 1; i <= n; i++) {

    for (j = 1; j <= m; j++) {

      // Index out of bound
      if (i + ans - 1 > n || j + ans - 1 > m)
        break;

      int mid, lo = ans;

      // Maximum possible size
      // of matrix
      int hi = min(n - i + 1, m - j + 1);

      // Binary Search
      while (lo < hi) {

        // Find middle index
        mid = (hi + lo + 1) / 2;

        // Check whether sum <= K
        // or not
        // If Yes check for other
        // half of the search
        if (sum[i + mid - 1][j + mid - 1]
            + sum[i - 1][j - 1]
            - sum[i + mid - 1][j - 1]
            - sum[i - 1][j + mid - 1]
          <= K) {
          lo = mid;
        }

        // Else check it in first
        // half
        else {
          hi = mid - 1;
        }
      }

      // Update the maximum size matrix
      ans = max(ans, lo);
    }
  }

  // Print the final answer
  cout << ans << endl;
}

// Driver Code
int main()
{
  vector<vector<int> > arr;

  arr = { { 1, 1, 3, 2, 4, 3, 2 },
      { 1, 1, 3, 2, 4, 3, 2 },
      { 1, 1, 3, 2, 4, 3, 2 } };

  // Given target sum
  int K = 4;

  // Function Call
  findMaxMatrixSize(arr, K);
  return 0;
}



// may be question

#include<bits/stdc++.h>
using namespace std;
class Solution { 
public: 
 double maximum_serving_area(vector<int> v,int k){
  double l=0,m=0,x;
  vector<double> A;
  for(int i=0;i<v.size();i++)  {
    x=(double)v[i]*3.141592*v[i];
    m=max(m,x);
    A.push_back(x);
  }
  while(m-l>=1e-5){
    x=(l+m)/2;
    if(check(x,A,k))
      l=x;
    else m=x;
  }
  return x;
 }
 bool check(double &x ,vector<double>&A,int &K){
   int k=0;
   for(auto a : A){
     k+=a/x;
     if(k>=K) return true;
   }
   return false;
 }    
};
int main(){
    int t,n,h,k;
    string s1;
    Solution s=Solution();
    cin>>t;
    while(t--){  
     cin>>n;
     vector<int> v(n);
     for(int i=0;i<n;i++) cin>>v[i];
     cin>>h; 
     double res=s.maximum_serving_area(v,h);  
     cout<<fixed<<setprecision(4)<<res;
     cout<<endl;  
    }
    
}


//ml question

  int longestStrChain(vector<string>& words) {
        vector<unordered_set<string>> W(17);
        for (auto word : words) 
            W[word.size()].insert(word);
        unordered_map<string, int> dp;
        int best = 1;
        for (int i = 16; i; i--) {
            if (W[i-1].empty()) continue;
            for (auto word : W[i]) {
                int wVal = dp[word] ? dp[word] : 1;
                for (int j = 0; j < word.size(); j++) {
                    string pred = word.substr(0,j) + word.substr(j+1);
                    int pVal = dp[pred] ? dp[pred] : 1;
                    if (W[i-1].find(pred) != W[i-1].end() && wVal >= pVal) {
                        dp[pred] = wVal + 1;
                        best = max(best, wVal + 1);
                    }
                }
            }
        }
        return best;
    }

    #include <bits/stdc++.h>
    
    using  namespace std;
    #define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define ll long long int
    #define pl pair<ll,ll>
    
    ll n;
    
    void solve()
    {
        ll x;
        cin>>n;
        
        for(int i=0;i<n;i++)
        {
            cin>>x;
        }
    }
    
    signed main()
    {
        IOS
        // ll t;cin>>t;while(t--)
        solve();
    }