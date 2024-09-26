//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    int maxStep(vector<int>& arr) {
        int n = arr.size();
        if (n < 2) return 0; // If less than 2 buildings, no steps possible.

        int max_steps = 0;
        int current_steps = 0;

        // Iterate through the buildings
        for (int i = 0; i < n - 1; i++) {
            if (arr[i + 1] > arr[i]) {
                // If the next building is taller, increment the step count
                current_steps++;
                // Update max_steps if current_steps exceeds previous max
                max_steps = max(max_steps, current_steps);
            } else {
                // If not taller, reset current steps
                current_steps = 0;
            }
        }

        return max_steps;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        cout << ob.maxStep(arr) << endl;
    }
    return 0;
}
// } Driver Code Ends
