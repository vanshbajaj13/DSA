class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // kadane's algo
        int mProfit = 0,curProfit = 0,profit;
        for(int i = 0 ; i < prices.size()-1 ;i++){
            profit = prices[i+1] - prices[i];
            curProfit = max(curProfit+profit,profit);
            mProfit = max(mProfit,curProfit);
        }
        
        return mProfit;
    }
};
