// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int sumExists(int arr[], int sizeOfArray, int sum);

 // } Driver Code Ends
// User function Template for C++

// Complete this function
// Function to check if two numbers in the array have sum equal to the given
// sum.
int sumExists(int arr[], int N, int sum) {
    // Your code here
    set<int> s;
    for(int i=0;i<N;i++)
    s.insert(arr[i]);
    set<int> :: iterator itr;
    int v;
    for(itr=s.begin();itr!=s.end();itr++)
    {
        if(sum>*(itr))
        v=sum-*(itr);
        else
        continue;
        if(s.find(v)!=s.end() && s.find(v)!=itr)
        return 1;
    }
    return 0;
}

// { Driver Code Starts.

int main() {

    int testcases;
    cin >> testcases;
    while (testcases--) {
        int N;
        cin >> N;

        int arr[N];

        for (int i = 0; i < N; i++) cin >> arr[i];
        int sum;
        cin >> sum;

        cout << sumExists(arr, N, sum) << endl;
    }

    return 0;
}  // } Driver Code Ends