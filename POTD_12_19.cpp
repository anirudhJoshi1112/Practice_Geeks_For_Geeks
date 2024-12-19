class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // Your code goes here
        int left = 0, right = arr.size() - 1;
        int missing;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            missing = arr[mid] - (mid + 1);
            if (missing < k) {
                left = mid + 1; 
            } 
            else {
                right = mid - 1; 
            }
        }
        return left + k;
    }
};
