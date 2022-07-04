//My-method
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>l,r,ans;
        int prod_l = 1;
        int prod_r = 1;
        l.push_back(1);r.push_back(1);
        for(int i=0;i<nums.size()-1;i++){
          prod_l = prod_l*nums[i];
          prod_r = prod_r*nums[nums.size()-1-i];
          l.push_back(prod_l);
          r.push_back(prod_r);
        }
        for(int i=0;i<nums.size();i++){
            ans.push_back(l[i]*r[nums.size()-1-i]);
        }
        return ans ;
        
    }
};
