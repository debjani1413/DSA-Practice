// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to remove pair of duplicates from given string using Stack.
    string removePair(string str)
    {
        // Your code here
       stack<char> s;
        string r="";
        for(int i=0;i<str.size();i++){
            if(s.empty() || s.top()!=str[i]){
                s.push(str[i]);
            }
            else if(s.top()==str[i]){
                s.pop();
            }
        }
        while(!s.empty()){
            r+=s.top();
            s.pop();
        }
        reverse(r.begin(),r.end());
        return r;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        Solution obj;
        string ans = obj.removePair (s);
        if(ans=="")
            cout<<"Empty String"<<endl;
        else
            cout<<ans<<endl;
    }
    
	return 0;
}  // } Driver Code Ends