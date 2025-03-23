class Solution {
  public:
    int removeDuplicates(vector<int> &arr) {
        // code here
        vector<int> temp;
        
        for(int i=0;i<arr.size();i++){
            int curr=arr[i];
            bool dupli=false;
            for(int j=0;j<temp.size();j++){
                if(temp[j]==curr){
                    dupli=true;
                    break;
                }
            }
            
            if(!dupli){
                temp.push_back(curr);
            }
        }
        arr=temp;
        return arr.size();
    }
};
