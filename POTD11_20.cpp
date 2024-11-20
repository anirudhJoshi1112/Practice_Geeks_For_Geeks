class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.
        int n = arr.size();
        unordered_map<int, int> frequency;
        for (int num : arr) {
            frequency[num]++;
        }

        vector<int> result;
        for (auto& pair : frequency) {
            if (pair.second > n / 3) {
                result.push_back(pair.first);
            }
        }
        sort(result.begin(), result.end());
        return result;
    }
};
