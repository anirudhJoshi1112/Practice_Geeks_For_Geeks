//Approach 1
//Time complexity : O(N)

class Solution {
  public:
    vector<int> find3Numbers(vector<int> &arr) {
        // Code here
        int n=arr.size();
        
        vector<int> leftmin(n),rightmax(n);
        
        leftmin[0]=arr[0];
        
        for(int i=1;i<n;i++)
            leftmin[i]=min(arr[i],leftmin[i-1]);
        
        rightmax[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--)
            rightmax[i]=max(arr[i],rightmax[i+1]);
        
        for(int i=1;i<n-1;i++){
            if(leftmin[i-1]<arr[i] and arr[i]<rightmax[i+1])
                return {leftmin[i-1],arr[i],rightmax[i+1]};
        }
        return {};
        
    }
};


//Approach 2
// Time Complexity : O(N^3)
vector<int> find3Numbers(vector<int> &arr) {
        // Code here
        int n=arr.size();
        vector<int>v;
        
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(arr[i]>= arr[j]) continue;
                for(int k=j+1; k<n;k++){
                    if(arr[i]<arr[j] && arr[j]<arr[k]){
                    v.push_back(arr[i]) ;
                    v.push_back(arr[j]) ;
                    v.push_back(arr[k]) ;
                    
                    return v;
                    }
                }
            }
        }
        
        return v;
    }
