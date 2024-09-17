//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
         int n = arr.size();
        if (n == 1) {
            return 0; // If there's only one tower, no difference.
        }

        // Step 1: Sort the array
        sort(arr.begin(), arr.end());

        // Step 2: Initial difference between maximum and minimum
        int result = arr[n - 1] - arr[0]; // Max - Min

        // Step 3: Loop through the array to try minimizing the difference
        for (int i = 1; i < n; i++) {
            // Check if the current element after subtracting K goes negative, skip if so
            if (arr[i] - k < 0) continue;

            // Smallest possible value after increasing the first element by k (arr[0] + k)
            int smallest = min(arr[0] + k, arr[i] - k);
            // Largest possible value after decreasing the last element by k (arr[n-1] - k)
            int largest = max(arr[n - 1] - k, arr[i - 1] + k);

            // Update the result with the minimum difference found
            result = min(result, largest - smallest);
        }

        return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, k;
        cin >> k;
        cin.ignore();
        vector<int> a, b, c, d;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution ob;
        auto ans = ob.getMinDiff(a, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
