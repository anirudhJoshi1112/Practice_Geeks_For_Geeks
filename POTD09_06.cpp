//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int missingNumber(int n, vector<int>& arr) {

        // Your code goes here
       int xor_all = 0;   
    int xor_arr = 0;   // XOR of all elements in the array
    
    // XOR all numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        xor_all ^= i;
    }
    
    // XOR all elements in the array
    for (int i = 0; i < arr.size(); i++) {
        xor_arr ^= arr[i];
    }
    
    // Missing number is the XOR of xor_all and xor_arr
    return xor_all ^ xor_arr;
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n - 1);
        for (int i = 0; i < n - 1; ++i)
            cin >> arr[i];
        Solution obj;
        cout << obj.missingNumber(n, arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends
