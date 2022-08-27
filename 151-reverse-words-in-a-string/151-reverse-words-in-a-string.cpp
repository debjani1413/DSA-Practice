class Solution {
public:
    string reverseWords(string s) {
       s+=" ";
    stack<string> st;
    int i;
    string str="";
    for(i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            st.push(str);
            str="";
        }
        else str+=s[i];
    }
    string ans="";
    while(!st.empty())
    {
        // cout<<st.top()<<"*";
        // st.pop();
        if(st.top()!="")
        ans+=st.top()+" ";
            st.pop();
    }
        ans.pop_back();
    // if(st.top()!="")
    //ans+=st.top();
        return ans;
    }
};