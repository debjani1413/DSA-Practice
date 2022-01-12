class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i,j=0;
        if(m==0)
            i=nums2.size()-1;
        else
            i=nums1.size()-1;
        while(i>=0 && j!=n)
        {
            nums1[i]=nums2[j];
            j++;
            i--;
        }
        sort(nums1.begin(),nums1.end());
    }
};