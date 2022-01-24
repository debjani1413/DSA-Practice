class Solution {
public:
    bool detectCapitalUse(string word) {
        int c=1,d=1;
        if(isupper(word[0]))
        {
            for(int i=1;i<word.length();i++)
            {
                if(isupper(word[i]))
                    c++;
                else
                if(islower(word[i]))
                    d++;
            }
            if(c==word.length() || d==word.length())
            return true;
        }
        else{
            c=1;
            if(islower(word[0])){
                for(int i=1;i<word.length();i++)
                {
                    if(islower(word[i]))
                        c++;
                }
                if(c==word.length())
                return true;
            }
        }
        return false;
    }
};