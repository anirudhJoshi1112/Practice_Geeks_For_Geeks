class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        // Your code here
        vector<int> naya;
        for(num : arr){
            if(num>0){
                naya.push_back(num);
            }
        }
        sort(naya.begin(),naya.end());
        
        int smallest=1;
        for(num : naya){
            if(num==smallest){
                smallest++;
            }
            else if(num>smallest){
                break;
            }
        }
        return smallest;
    }
};
