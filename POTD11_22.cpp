class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int minPrice = INT_MAX;
        int maxProfit = 0;
        for (int price : prices) {
            if (price < minPrice) {
                minPrice = price;
            }
            else{
                maxProfit = max(maxProfit, price - minPrice);
            }
        }
        return maxProfit;
    }
};
