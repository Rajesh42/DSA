//my soln
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>um;
        for(int x:nums){
            um[x]++;
        }
        int n = nums.size();
        for(auto x:um){
            if(x.second>n/2)return x.first;
        }
        return 0;
    }
};
