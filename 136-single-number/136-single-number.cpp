class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int snum=0;
        for(int i=0;i<nums.size();i++)
        {
            snum=snum^nums[i];
        }
        return snum;
    }
};