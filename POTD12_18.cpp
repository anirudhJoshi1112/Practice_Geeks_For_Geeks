class Solution {
  public:
    // Function to check if a given maximum is possible
    bool isPossible(vector<int>& arr, int n, int k, int maxPages) {
        int studentsRequired = 1;
        int currentSum = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] > maxPages) return false; // Single book exceeds maxPages

            if (currentSum + arr[i] > maxPages) {
                // Allocate to next student
                studentsRequired++;
                currentSum = arr[i];

                if (studentsRequired > k) return false;
            } else {
                currentSum += arr[i];
            }
        }
        return true;
    }

    // Function to find the minimum maximum pages
    int findPages(vector<int>& arr, int k) {
        int n = arr.size();
        if (k > n) return -1; // Not enough books for students

        int start = *max_element(arr.begin(), arr.end());
        int end = accumulate(arr.begin(), arr.end(), 0);
        int result = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (isPossible(arr, n, k, mid)) {
                result = mid; // Update result and try for a smaller max
                end = mid - 1;
            } else {
                start = mid + 1; // Increase the maxPages
            }
        }

        return result;
    }
};
