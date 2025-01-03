class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        unordered_map<int, int> freq;
        long count = 0;
        int currentXOR = 0;

        for (int num : arr) {
            currentXOR ^= num;

            // Check if the current XOR is equal to k
            if (currentXOR == k) {
                count++;
            }

            // Check if there exists a prefix XOR that gives the required XOR
            int requiredXOR = currentXOR ^ k;
            if (freq.find(requiredXOR) != freq.end()) {
                count += freq[requiredXOR];
            }

            // Update the frequency of the current XOR
            freq[currentXOR]++;
        }

        return count;
    }
};
