class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int n = mat.size();    
        int m = mat[0].size(); 
        int low = 0, high = n * m - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int midElement = mat[mid / m][mid % m];
            if (midElement == x) {
                return true; 
            }
            else if (midElement < x) {
                low = mid + 1; 
            }
            else {
                high = mid - 1; 
            }
        }
        return false;
    }
};
