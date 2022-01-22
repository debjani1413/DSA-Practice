class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int max=prices[0];
        int profit=0,j;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<=min){
                min=prices[i];
                j=i;
                max=prices[i];
            // while(j!=prices.size())
            // {
            //     if(prices[j]>max)
            //         max=prices[j];
            //     j++;
            // }
            }
            else
                max=prices[i];
            if(profit<(max-min))
            profit=max-min;
        }
        
        return profit;
    }
};