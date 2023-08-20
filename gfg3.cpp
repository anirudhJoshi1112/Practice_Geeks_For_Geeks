class Solution{
public:	

	// Function returns the second largest elements

	int print2largest(int arr[], int n) {
	    // code here
	    int lar=arr[0];
	    int seclar=-1;
	    for(int i=1;i<n;i++){
	        if(lar<arr[i]){
	            seclar=lar;
	            lar=arr[i];
	        }
	        else if(seclar<arr[i]&&lar!=arr[i]){
	            seclar=arr[i];
	        }
	    }
	    return seclar;
	}
};
