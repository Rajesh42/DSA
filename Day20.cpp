class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1,0);
        return helper(amount,coins,dp);    
        }
    int helper(int i,vector<int>& coins, vector<int>& dp ){
        if(i ==0 )return 0;
        else if (dp[i]!=0)return dp[i];
        else{
            int ans =-1;
            for(int j=0 ; j<coins.size();j++){
                if(i-coins[j]>=0){
                    int value = 1 + helper(i-coins[j],coins,dp);
                    if(value !=0){
                        if(ans == -1 || ans > value ) ans = value;
                    }
                }
            }
            dp[i] = ans;
            return ans;
        } 
}
};
