class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long> ans(n,-1); //initialize result with -1
        stack<long long> st;
        
        for(int i=n-1;i>=0;i--){
            //pop element until we find a greater element 
            while(!st.empty() && st.top()<=arr[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i]=st.top();
            }
            st.push(arr[i]); //update the stack by pushing current element
        
            
        }
        return ans;
    }
    
};
