//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
string removeDuplicate(string &s) {
  int n=s.size();
  /*
  create the array of size n and create the array of the ele and find 
  the scenario and do the mapping and solve the question and do it usign 
  create the array and solve that question using the following manner
  geeksforgeeks 


  */

  vector<int>indexMapped(130,0);
  for(auto ch: s){
    int ascii=(int  )ch;
    indexMapped[ascii]++;
  }
  string ans="";
  for(auto ch: s){
    if(indexMapped[(int)ch]){
      ans+=ch;
      indexMapped[(int)ch]=0;
    }
  }
  return ans;

}

	string removeDuplicates(string str) {
	    // code here
	   return removeDuplicate(str);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends