//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<int>> nQueen(int n) {
        // code here
         vector<vector<int>> results; // To store all the possible configurations
        vector<int> board(n);        // To store one configuration as a permutation of [1...n]
        vector<bool> usedRows(n, false);    // To track used rows
        vector<bool> usedMajorDiag(2 * n, false); // To track used major diagonals
        vector<bool> usedMinorDiag(2 * n, false); // To track used minor diagonals

        // Call the backtrack function starting from the first column
        backtrack(0, n, board, usedRows, usedMajorDiag, usedMinorDiag, results);
        return results;
    }

private:
    // Backtrack function to try placing queens in each column
    void backtrack(int col, int n, vector<int>& board, vector<bool>& usedRows,
                   vector<bool>& usedMajorDiag, vector<bool>& usedMinorDiag, vector<vector<int>>& results) {
        // If all columns are filled, save the current board configuration
        if (col == n) {
            results.push_back(board);
            return;
        }

        // Try placing a queen in every row for the current column
        for (int row = 0; row < n; row++) {
            // Calculate the indices for the diagonals
            int majorDiag = row - col + n;
            int minorDiag = row + col;

            // Check if placing a queen here is valid
            if (!usedRows[row] && !usedMajorDiag[majorDiag] && !usedMinorDiag[minorDiag]) {
                // Place the queen and mark the row and diagonals as used
                board[col] = row + 1; // Storing the row (1-indexed) where the queen is placed
                usedRows[row] = usedMajorDiag[majorDiag] = usedMinorDiag[minorDiag] = true;

                // Recursively try to place the next queen
                backtrack(col + 1, n, board, usedRows, usedMajorDiag, usedMinorDiag, results);

                // Backtrack and unmark the row and diagonals
                usedRows[row] = usedMajorDiag[majorDiag] = usedMinorDiag[minorDiag] = false;
            }
        }
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends
