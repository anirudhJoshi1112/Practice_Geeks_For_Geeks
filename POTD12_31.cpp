class Solution {
public:
    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        unordered_set<int> elements(arr.begin(), arr.end());
        int longest = 0;

        for (int num : arr) {
            // Check if 'num' is the start of a sequence.
            if (elements.find(num - 1) == elements.end()) {
                int currentNum = num;
                int currentStreak = 1;

                // Count consecutive numbers.
                while (elements.find(currentNum + 1) != elements.end()) {
                    currentNum++;
                    currentStreak++;
                }

                // Update the longest streak found.
                longest = max(longest, currentStreak);
            }
        }

        return longest;
    }
