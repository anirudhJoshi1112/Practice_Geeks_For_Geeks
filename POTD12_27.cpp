
class Solution {
public:
    int countPairs(vector<int> &arr, int target) {
        unordered_map<int, int> freq; // Map to store the frequency of elements
        int count = 0;

        for (int num : arr) {
            int complement = target - num;
            // Check if the complement exists in the map
            if (freq.find(complement) != freq.end()) {
                count += freq[complement];
            }
            // Increment the frequency of the current number
            freq[num]++;
        }

        return count;
    }
};
