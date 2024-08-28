class Solution {
  public:
  
  static bool func(pair<int,int> &a,pair<int,int> &b){
      if(a.second>b.second) return true;
      if(a.second<b.second) return false;
      else
        return a.first<b.first;
  }
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
        unordered_map<int, int> hel;
        vector<pair<int,int>> vec;
        vector<int> ans;
        
        for(auto i:arr) hel[i]++;
        for(auto i:arr) vec.push_back({i,hel[i]});
        
        sort(vec.begin(),vec.end(),func);
        for(auto i:vec) ans.push_back(i.first);
        return ans;
        
    }
};
