//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isCircle(vector<string> &arr) {
        // code here
          unordered_map<char, int> inDegree, outDegree;
    unordered_map<char, vector<char>> graph;
    
    for (const string& str : arr) {
        char first = str.front();
        char last = str.back();
        graph[first].push_back(last);
        outDegree[first]++;
        inDegree[last]++;
    }

    for (auto& node : graph) {
        if (inDegree[node.first] != outDegree[node.first])
            return false;
    }

    unordered_map<char, bool> visited;
    queue<char> q;
    q.push(arr[0].front());

    while (!q.empty()) {
        char node = q.front();
        q.pop();
        if (visited[node]) continue;
        visited[node] = true;
        for (char neighbor : graph[node]) {
            if (!visited[neighbor])
                q.push(neighbor);
        }
    }

    for (auto& node : graph) {
        if (!visited[node.first] || node.second.size() != inDegree[node.first])
            return false;
    }
    return true;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> A;
        string s;

        for (int i = 0; i < N; i++) {
            cin >> s;
            A.push_back(s);
        }

        Solution ob;
        cout << ob.isCircle(A) << endl;
    }
    return 0;
}
// } Driver Code Ends
