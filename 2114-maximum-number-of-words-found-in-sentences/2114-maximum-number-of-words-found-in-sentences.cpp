class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max=0;
        for(int i=0;i<sentences.size();i++)
        {
            string s=sentences[i];
            int j=0,c=0;
            while(s[j]!='\0')
            {
             if(s[j]==' ')
                 c++;
                j++;
            }
            c++;
            if(c>max)
                max=c;
        }
        return max;
    }
};