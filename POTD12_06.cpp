class Solution {
  public:
    // Function to find hIndex
    int hIndex(vector<int>& citations) {
        // code here
        sort(citations.begin(),citations.end(),greater<int>());
        int hIndex=0;
        for (int i=0;i<citations.size();i++){
            if(citations[i]>=i+1){
                hIndex=i+1;
            } 
            else{
                break;
            }
        }
        return hIndex;
    }
};
