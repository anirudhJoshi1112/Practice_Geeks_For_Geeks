class Solution{
  public:
    int missingNumber(vector<int>& a, int n) {
        // Your code goes here
        int total=1;
        for(int i=2;i<n+1;i++){
            total+=i;
            total-=a[i-2];
        }
           return total;
    }
};
