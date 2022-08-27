class Solution {
public:
    void sortColors(vector<int>& nums) {
        // for(int i=0;i< nums.size()-1;i++)
        // {
        //     for(int j=0;j<nums.size()-i-1;j++)
        //     {
        //         if(nums[j]>nums[j+1])
        //             swap(nums[j],nums[j+1]);
        //     }
        // } 
        
        int low=0,mid=0,high=nums.size()-1;
        
        while(mid<=high)
        {
            switch(nums[mid]){
                case 0:
                    swap(nums[low++],nums[mid++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(nums[mid],nums[high--]);
                    break;
            }
        }
    }
};