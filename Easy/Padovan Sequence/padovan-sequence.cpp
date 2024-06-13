//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
  public:
    int padovanSequence(int n) {
        int mod=1e9+7;
      if (n == 0 || n == 1 || n == 2) return 1;
        
        std::vector<int> t(n + 1, 1); // Initialize all values with 1 for base cases
        for (int i = 3; i <= n; ++i) {
            t[i] = (t[i - 2] + t[i - 3]) % mod;
        }
        
        return t[n];
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.padovanSequence(n) << endl;
    }
    return 0;
}
// } Driver Code Ends