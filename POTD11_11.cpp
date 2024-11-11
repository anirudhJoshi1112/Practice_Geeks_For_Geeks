class Solution {
  public:
    int minIncrements(vector<int>& arr) {
        // Code here
        sort(arr.begin(),arr.end());
        
        int increments = 0;
    
    // Step 2: Iterate through sorted array and make elements unique
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i - 1]) {
            int required = arr[i - 1] + 1; // Minimum value arr[i] should be
            increments += required - arr[i];
            arr[i] = required; // Update arr[i] to the unique value
        }
    }
    
    return increments;
    }
};
