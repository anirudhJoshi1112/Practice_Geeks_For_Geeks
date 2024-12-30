class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) {
        // code here
        unordered_set<int> unionS;
        for(int i:a){
            unionS.insert(i);
        }
        for(int i:b){
            unionS.insert(i);
        }
        return unionS.size();
    }
};
