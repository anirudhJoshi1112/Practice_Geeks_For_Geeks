//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
        if(arr.empty()) return "";
        sort(arr.begin(),arr.end());
        string first=arr[0];
        string last=arr[arr.size()-1];
        string ans="";
        int miniele=min(first.length(),last.length());
        
        for(int i=0;i<miniele;i++){
            if(first[i]==last[i]){
                ans+=first[i];
            }
            else{
                break;
            }
        }
        if(ans.empty()){
            return "-1";
        }
        else{
            return ans;   
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends
