class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         k = k%nums.size();
        int first=0, last=nums.size()-1;
        while(first<=last)
        {
            swap(nums[first],nums[last]);
            first++;
            last--;
        }
        
        first=0,last=k-1;
        while(first<=last)
        {
            swap(nums[first],nums[last]);
            first++;
            last--;
        }
        
        first=k, last=nums.size()-1;
        while(first<=last)
        {
            swap(nums[first],nums[last]);
            first++;
            last--;
        }
    }
};