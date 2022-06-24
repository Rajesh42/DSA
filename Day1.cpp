//Best Time to Buy and Sell Stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low = prices[0];
        int ans =0;
        for (int i=1;i<prices.size();i++){
            low = min(low,prices[i-1]);
            ans = max(prices[i]-low,ans);
                
        }
        return ans;
    }
};
