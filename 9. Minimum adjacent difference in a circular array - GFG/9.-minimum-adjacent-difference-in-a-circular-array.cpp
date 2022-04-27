// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    //Function to find minimum adjacent difference in a circular array.
    // arr[]: input array
    // n: size of array
    int minAdjDiff(int arr[], int n){    
        // Your code here
        int f=arr[0];
        for(int i=0;i<n-1;i++){
            arr[i]=abs(arr[i]-arr[i+1]);
        }
        arr[n-1]=abs(arr[n-1]-f);
        int min = arr[0];
        for(int i=0;i<n;i++){
           if(arr[i]<min)
           min=arr[i];
        }
        return min;
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; //Input testcases
    
    while(t--) //While testcases exist
    {
        int n;
        cin>>n; //Input size of array
        
        int arr[n]; //Array of size n
        
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i]; //input elements of array
        }
        Solution ob;
        
        cout << ob.minAdjDiff(arr, n) << endl;
    }
    return 0;
}  // } Driver Code Ends