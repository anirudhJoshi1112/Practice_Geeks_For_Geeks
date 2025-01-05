class Solution {
public:
    int countPairs(vector<int> &arr, int target) {
        // Step 1: Sort the array
        sort(arr.begin(), arr.end());

        int left = 0, right = arr.size() - 1;
        int count = 0;

        // Step 2: Use two-pointer technique
        while (left < right) {
            if (arr[left] + arr[right] < target) {
                // All pairs between left and right are valid
                count += (right - left);
                left++; // Move left pointer forward
            } else {
                right--; // Move right pointer backward
            }
        }
        return count;
    }
};
