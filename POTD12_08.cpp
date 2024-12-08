class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
        if(arr.empty()){
            return {};
        }
        sort(arr.begin(),arr.end());
        vector<vector<int>> merge;
        vector<int> current=arr[0];
        for(int i=1;i<arr.size();i++){
            if(current[1]>=arr[i][0]){
                current[1]=max(current[1],arr[i][1]);
            }
            else{
                merge.push_back(current);
                current=arr[i];
            }
        }
        merge.push_back(current);
        return merge;
    }
};
