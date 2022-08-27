class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
     unordered_map<int,int> mp;
        vector<int> result;
        for(int i=0;i<numbers.size();i++)
        {
            int val=target-numbers[i];
            
            if(mp.find(val)!=mp.end())
            {
                result.push_back(i);
                result.push_back(mp[val]);
                return result;
            }
            mp[numbers[i]]=i;
        }
        return result;
    }
};