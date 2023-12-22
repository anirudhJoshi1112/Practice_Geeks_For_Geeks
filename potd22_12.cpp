class Solution{
public:

    
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
        vector<int>ans;
        vector<pair<int,int>>v;
        
        for(int i=0;i<N;i++){
            v.push_back({F[i],i});
        }
        
        sort(v.begin(),v.end());
        
        
        int end=v[0].first;
        ans.push_back(v[0].second+1);
        
        for(int i=1;i<N;i++){
            if(S[v[i].second]>end){
                end=v[i].first;
                ans.push_back(v[i].second+1);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
