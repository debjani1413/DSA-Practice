class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n,j;
        long long result;
        vector<int> v;
        v.push_back(1);
        if(rowIndex==0)
            return v;
        for(int i=1;i<rowIndex;i++){ 
            n=rowIndex,j=0,result=1;
            while(j!=i ){
                j++;
                result=result*n;
                n--;
                result=result/j;
                }
        v.push_back(result);
        }
        v.push_back(1);
        return v;
    }
};