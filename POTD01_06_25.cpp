class Solution {
public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        // Edge case: If there are fewer than two elements
        if (arr.size() < 2) return {};

        // Step 1: Sort the array
        sort(arr.begin(), arr.end());

        // Step 2: Initialize variables
        int left = 0, right = arr.size() - 1;
        int closestSum = INT_MAX;
        vector<int> result;
        
        // Step 3: Use two-pointer technique
        while (left < right) {
            int sum = arr[left] + arr[right];
            int diff = abs(sum - target);

            // Update if the current pair is closer or if the absolute difference is greater
            if (diff < abs(closestSum - target) || 
               (diff == abs(closestSum - target) && abs(arr[right] - arr[left]) > abs(result[1] - result[0]))) {
                closestSum = sum;
                result = {arr[left], arr[right]};
            }

            // Adjust pointers
            if (sum < target) {
                left++; // Move left pointer forward
            } else {
                right--; // Move right pointer backward
            }
        }

        return result;
    }
