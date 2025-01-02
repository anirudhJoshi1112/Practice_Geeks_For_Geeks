class Solution {
public:
    int countSubarrays(vector<int>& arr, int k) {
        unordered_map<int, int> prefixSum;
        int currSum = 0;                  
        int count = 0;                   
        prefixSum[0] = 1;

        for (int num : arr) {
            currSum += num; 
            if (prefixSum.find(currSum - k) != prefixSum.end()) {
                count += prefixSum[currSum - k];
            }
            prefixSum[currSum]++;
        }
        
        return count;
    }
};
