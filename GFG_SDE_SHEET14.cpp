//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minRepeats(string& s1, string& s2) {
        // code herestd::string repeatedString = "";
         std::string repeatedString = "";
    int count = 0;
    
    // Repeat s1 until the length of repeatedString is at least as long as s2 or slightly more
    while (repeatedString.length() < s2.length() * 2) {
        repeatedString += s1;
        count++;
        
        // Check if s2 is now a substring of the repeated string
        if (repeatedString.find(s2) != std::string::npos) {
            return count;
        }
    }
    
    // If s2 is not found as a substring even after sufficient repetitions
    return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {
        string A, B;
        getline(cin, A);
        getline(cin, B);

        Solution ob;
        cout << ob.minRepeats(A, B) << endl;
    }
    return 0;
}
// } Driver Code Ends
