class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int e=nums.size()-1;
        while(l<=e)
        {
        int mid = l+(e-l)/2;
        if(nums[mid]==target)
            return mid;
        if(nums[mid]>target)
            e=mid-1;
        if(nums[mid]<target)
            l=mid+1;
        }
        return l;
    }
};