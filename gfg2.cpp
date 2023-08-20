class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    int j=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]!=0){
	            swap(arr[j],arr[i]);
	            j++;       // j will increment and point to the non zero elemnt because the main condition is arr[i]!=0
	        }
	    }
	}
};
