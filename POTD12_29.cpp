class Solution {
public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        unordered_map<int, bool> seen;
        vector<int> result;

        // Mark all elements of 'a' as seen
        for (int num : a) {
            seen[num] = true;
        }

        // Check for intersection using 'b' array
        for (int num : b) {
            if (seen[num]) {
                result.push_back(num);
                // Ensure no duplicates by marking the element as already processed
                seen[num] = false;
            }
        }

        return result;
    }
};
