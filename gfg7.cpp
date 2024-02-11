class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        set<int> st;
        for(int i=0;i<n;i++){
            st.insert(a[i]);
        }
        int index=0;
        for(auto it:st){
            a[index]=it;
            index++;
        }
        return index;
    }
};
