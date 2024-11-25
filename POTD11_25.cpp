  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        // Your Code Here
        int n = arr.size();
        if (n == 0) return 0;
        int maxProd = arr[0];
        int minProd = arr[0];
        int result = arr[0];

        for (int i = 1; i < n; i++) {
            int current = arr[i];
            if (current < 0) {
                swap(maxProd, minProd);
            }
            maxProd = max(current, maxProd * current);
            minProd = min(current, minProd * current);
            result = max(result, maxProd);
        }
        return result;
    }
};
