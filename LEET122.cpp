class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int mProfit = 0,cProfit ;
       for(int i = 1; i< prices.size();i++) {
           cProfit = prices[i]-prices[i-1];
           mProfit = max(mProfit,cProfit+mProfit);
       }
       return mProfit;
    }
};
