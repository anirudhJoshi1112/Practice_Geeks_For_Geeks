class Solution {
  public:
    int removeDuplicates(vector<int> &arr) {
        // code here
        int n=arr.size();
        int unique=0;
        for(int i=1;i<n;i++){
            if(arr[i]!=arr[unique]){
                unique++;
                arr[unique]=arr[i];
            }
        }
        return unique+1;
    }
};
