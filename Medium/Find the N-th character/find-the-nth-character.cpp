//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    char nthCharacter(string str, int r, int n) {
        //code here
        
        if(n==0)return str[0];
          for(int i=0;i<r;i++){
    string temp="";
    for(int j=0;j<n;j++){
      if(str[j]=='1'){
        temp+="10";
      }
      else if(str[j]=='0'){
        temp+="01";
      }
    }
    str=temp;

  }
  return str[n];


    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, N;
        string S;
        cin >> S >> R >> N;
        Solution ob;
        cout << ob.nthCharacter(S, R, N) << endl;
    }
    return 0;
}
// } Driver Code Ends