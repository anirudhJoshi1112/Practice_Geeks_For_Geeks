class Solution {
  public:
    int getSingle(vector<int>& arr) {
        // code here
        int n=arr.size();
        stack<int> st;
        st.push(arr[0]);
        for(int i=1;i<n;i++){
            if(!st.empty() && st.top()==arr[i]){
                st.pop();
            }
            else{
                st.push(arr[i]);
            }
            
        }
        if(!st.empty()){
            return st.top();
        }
        return -1;
    }
};
