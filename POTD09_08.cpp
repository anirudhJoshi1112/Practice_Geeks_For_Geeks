//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // Your code here
        
       int n = arr.size();
    if (n <= 1) {
        return 0; // Already at the end
    }
    if (arr[0] == 0) {
        return -1; // Can't move forward if the first element is 0
    }

    int maxReach = arr[0]; // The farthest we can reach
    int steps = arr[0];    // Steps we can still take
    int jumps = 1;         // Number of jumps needed

    for (int i = 1; i < n; i++) {
        if (i == n - 1) {
            return jumps; // Reached the end
        }

        // Update maxReach and steps
        maxReach = max(maxReach, i + arr[i]);
        steps--;

        // If no steps are left, we need to jump
        if (steps == 0) {
            jumps++;

            // If the current index is beyond maxReach, we can't reach further
            if (i >= maxReach) {
                return -1;
            }

            // Re-initialize steps to the amount needed to reach maxReach
            steps = maxReach - i;
        }
    }

    return -1;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, i, j;
        vector<int> arr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.minJumps(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends
