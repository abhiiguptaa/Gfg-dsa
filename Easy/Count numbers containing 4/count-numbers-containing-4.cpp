//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool checkFour(int num){
        while(num>0){
            int ld=num%10;
            if(ld==4)return true;
            num/=10;
            
        }
        return false;
        
    }
    int countNumberswith4(int n) {
      int cnt=0;
      for(int i=1;i<=n;i++){
          if(checkFour(i)){
              cnt++;
          }
      }
      return cnt;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        int res = obj.countNumberswith4(n);

        cout << res << endl;
    }
}

// } Driver Code Ends