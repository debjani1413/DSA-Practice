// { Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


 // } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int mid, int r)
    {
         // Your code here
         int s=l,e=mid+1,i=0,x=0,j;
         int size=r-l+1;
         int merged[r-l+1];
         while(s<=mid&&e<=r)
         {
             if(arr[s]<=arr[e])
             merged[x++]=arr[s++];
             else
             merged[x++]=arr[e++];
         }
         while(s<=mid){
             merged[x++]=arr[s++];
         }
         while(e<=r){
             merged[x++]=arr[e++];
         }
         for(i=0,j=l;i<size;i++,j++)
         arr[j]=merged[i];
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        int mid=l+(r-l)/2;
        if(l<r){
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
        }
    }
};

// { Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends