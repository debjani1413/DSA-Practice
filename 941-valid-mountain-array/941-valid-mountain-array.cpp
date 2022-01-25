class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)
            return false;
        int i=0,j=0,d=0;
        while(i<arr.size()-1 && arr[i]<arr[i+1])
        i++;
        d=i;
        if(i+1==arr.size())
            return false;
        cout<<i;
        while(i<arr.size()-1 && arr[i]>arr[i+1]){
        j++;
        i++;
        }
        if(j+1==arr.size())
            return false;
        if((d+j+1)==arr.size())
            return true;
        else
            return false;
    }
};