class Solution {
public:
    bool twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        if (n < 2) {
            return false; // At least two elements are required
        }
        
        std::sort(arr.begin(), arr.end()); // Sort the array first
        
        int left = 0, right = n - 1; // Two pointers
        while (left < right) {
            int sum = arr[left] + arr[right];
            if (sum == target) {
                return true; // Found the pair
            } else if (sum < target) {
                left++; // Move left pointer to increase the sum
            } else {
                right--; // Move right pointer to decrease the sum
            }
        }
        return false; // No such pair exists
    }
};
