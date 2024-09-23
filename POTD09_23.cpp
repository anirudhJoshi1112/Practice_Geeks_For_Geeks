//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends


class Solution {
  public:
     vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        int repeat = -1, missing = -1;

        // Step 1: Mark the visited elements
        for (int i = 0; i < n; ++i) {
            int index = abs(arr[i]) - 1;  // The element's corresponding index
            if (arr[index] < 0) {
                // If already marked, it's the repeating element
                repeat = abs(arr[i]);
            } else {
                // Mark the element by negating it
                arr[index] = -arr[index];
            }
        }

        // Step 2: Find the missing number
        for (int i = 0; i < n; ++i) {
            if (arr[i] > 0) {
                // If positive, the index+1 is the missing number
                missing = i + 1;
                break;
            }
        }

        return {repeat, missing};
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends
