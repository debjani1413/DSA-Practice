class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int nx = x;
        long long s=0;
        while(x!=0)
        { 
        int r= x%10;
        s=s*10+r;
        x=x/10;
        }
        if(nx==s)
            return true;
        else
            return false;
        
    }
};