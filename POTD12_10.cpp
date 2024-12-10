class Solution {
  public:
    int minRemoval(vector<vector<int>> &intervals) {
        // code here
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1];
        });

        int removed_intervals = 0;
        int prev_end = INT_MIN; 

        for (const auto& interval : intervals) {
        if (interval[0] >= prev_end) {
            prev_end = interval[1];
        } else {
            removed_intervals++;
        }
    }

    return removed_intervals;
    }
};
