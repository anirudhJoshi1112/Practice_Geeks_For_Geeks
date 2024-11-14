class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        // code
        priority_queue<int, vector<int>, greater<int>> minHeap;

        for (int i = 0; i <= k; ++i) {
            minHeap.push(arr[i]);
        }

        int index = 0;
        for (int i = k + 1; i < arr.size(); ++i) {
            arr[index++] = minHeap.top();  
            minHeap.pop(); 
            minHeap.push(arr[i]);   
        }
        while (!minHeap.empty()) {
            arr[index++] = minHeap.top();
            minHeap.pop();
        }
    }
};
