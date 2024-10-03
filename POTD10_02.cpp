class Solution {
public:
    int rotateDelete(vector<int> &arr) {
        int n = arr.size();
        int sz = n;
        
        for (int k = 1; k <= sz / 2; ++k) {
            // Right-rotate the array by 1
            int lastElement = arr[n - 1];
            for (int i = n - 1; i > 0; --i) {
                arr[i] = arr[i - 1];
            }
            arr[0] = lastElement;
            
            // Delete the (n - k + 1)th element from the beginning
            arr.erase(arr.begin() + (n - k)); // n - k + 1 becomes (n - k) in 0-indexed array
            
            // Decrease n (the size of the array)
            --n;
        }
        
        // Return the first element after all operations
        return arr[0];
    }
};
