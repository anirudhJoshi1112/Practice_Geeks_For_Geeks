class Solution {
  public:
    vector<int> search(string& pat, string& txt) {
        // code here
        vector<int> ans;
        
        int n=pat.size();
        int m=txt.size();
        if(pat.empty() || txt.empty() || n>m){
            return {};
        }
        for(int i=0;i<=m-n;i++){
            bool isMatch=true;
            for(int j=0;j<n;j++){
                if(txt[i+j]!=pat[j]){
                    isMatch=false;
                    break;
                }
            }
            if(isMatch){
                ans.push_back(i);
            }
        }
        return ans;
  }
};
