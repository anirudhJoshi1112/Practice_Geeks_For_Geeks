class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int n=arr.size();
        int secondlar=1;
        int largest=-1;
        for(int i=0;i<n;i++){
            if(arr[i]>largest){
                secondlar=largest;
                largest=arr[i];
            }
            
            else if(arr[i]>secondlar && arr[i]<largest){
                secondlar=arr[i];
            }
            
        }
        return secondlar;
    }
};
