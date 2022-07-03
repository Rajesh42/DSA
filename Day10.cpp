class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_prod = nums[0];
        int prod = 1;
        for (int i=0;i<nums.size();i++){
            prod = prod * nums[i];
            max_prod = max(max_prod , prod);
            if(prod==0){
                prod =1;
            }
        }
        prod = 1;
        for (int i=nums.size()-1;i>=0;i--){
            prod = prod * nums[i];
            max_prod = max(max_prod , prod);
            if(prod==0){
                prod =1;
            }
        }
        return max_prod;
    }
};
