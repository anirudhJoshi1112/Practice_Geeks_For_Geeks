class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        int left = 0, right = arr.size() - 1;
        int count = 0;

        while (left < right) {
            int sum = arr[left] + arr[right];

            if (sum == target) {
                // Handle duplicates
                if (arr[left] == arr[right]) {
                    int numElements = right - left + 1;
                    count += (numElements * (numElements - 1)) / 2; // nC2 pairs
                    break;
                } else {
                    int leftCount = 1, rightCount = 1;

                    // Count duplicates on the left
                    while (left + 1 < right && arr[left] == arr[left + 1]) {
                        leftCount++;
                        left++;
                    }

                    // Count duplicates on the right
                    while (right - 1 > left && arr[right] == arr[right - 1]) {
                        rightCount++;
                        right--;
                    }

                    // Multiply counts of duplicates
                    count += leftCount * rightCount;

                    // Move pointers inward
                    left++;
                    right--;
                }
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }

        return count;
    }
};
