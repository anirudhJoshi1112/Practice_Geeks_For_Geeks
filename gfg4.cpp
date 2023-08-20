
#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
         //Your code here
         int phla;
         int dusra;
         int tisra;
         if(n<3){
             cout<<"invailid input";
         }
         phla=dusra=tisra=INT_MIN;
         for(int i=0;i<n;i++){
             if(a[i]>phla){
                 tisra=dusra;
                 dusra=phla;
                 phla=a[i];
             }
             else if(a[i]>dusra&&a[i]!=phla){
                 tisra=dusra;
                 dusra=a[i];
             }
             else if(a[i]>tisra&&a[i]!=dusra&&a[i]!=phla){
                tisra=a[i];
             }
         }
         return phla,dusra,tisra;
    }

};

//{ Driver Code Starts.
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}   
