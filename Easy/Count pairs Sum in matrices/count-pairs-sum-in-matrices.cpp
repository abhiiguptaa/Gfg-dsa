//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int f(vector<vector<int>>&mat1,vector<vector<int>>&mat2,int x,int n){
	    unordered_set<int>st;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        st.insert(mat2[i][j]);
    }
  }
  
  int cnt=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
     if(st.find(x-mat1[i][j])!=st.end()){
         cnt++;
     }
    }
  }
 
 return cnt;

}
	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	   return f(mat1,mat2,x,n);
	}
};

//{ Driver Code Starts.


int main() 
{

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<vector<int>> mat1(n, vector<int>(n, -1));
        vector<vector<int>> mat2(n, vector<int>(n, -1));

        for(int i = 0; i < n; i++)
        {
        	for(int j = 0; j < n; j++)
        	{
        		cin >> mat1[i][j];
        	}
        }

        for(int i = 0; i < n; i++)
        {
        	for(int j = 0; j < n; j++)
        	{
        		cin >> mat2[i][j];
        	}
        }

        Solution ob;

        cout << ob.countPairs(mat1, mat2, n, x) << "\n";

    }

    return 0;
}
// } Driver Code Ends