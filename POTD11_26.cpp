class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {

        // your code here
        int n = arr.size();
        // Step 1: Use Kadane's algorithm for the normal array
        int maxSum = INT_MIN, currentMax = 0;
        for (int num : arr) {
            currentMax = max(num, currentMax + num);
            maxSum = max(maxSum, currentMax);
        }

        // Step 2: Calculate the total sum of the array
        int totalSum = 0;
        for (int num : arr) {
            totalSum += num;
        }

        // Step 3: Use Kadane's algorithm for the minimum subarray sum
        int minSum = INT_MAX, currentMin = 0;
        for (int num : arr) {
            currentMin = min(num, currentMin + num);
            minSum = min(minSum, currentMin);
        }

        // Step 4: Calculate the maximum circular subarray sum
        int circularMaxSum = totalSum - minSum;
        // Step 5: Handle the case where all elements are negative
        if (circularMaxSum == 0) {
            return maxSum;
        }

        return max(maxSum, circularMaxSum);
    }
};
