class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_reachable =0;
        for (int i=0;i<nums.size()-1;i++){
            max_reachable = max(max_reachable,i+nums[i]);
            if(i==max_reachable&&nums[max_reachable]==0)return false;
        }
        return true;
    }
};
