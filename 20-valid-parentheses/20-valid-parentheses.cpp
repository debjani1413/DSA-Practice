class Solution {
public:
    bool isValid(string s) {
        stack<char> store;
        for(char& c : s)
        {
            switch(c){
                case '(':
                case '{':
                case '[': store.push(c); 
                break;
                case ')': if(store.empty() || store.top()!='(') return false; 
                else store.pop(); break;
                case '}': if(store.empty() || store.top()!='{') return false; 
                else store.pop(); break;
                case ']': if(store.empty() || store.top()!='[') return false; 
                else store.pop(); break;
            }
        }
        return store.empty();
    }
};