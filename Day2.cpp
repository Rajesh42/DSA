class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //M1 
        /*int ans = nums[0];
         for (int i=1;i<nums.size();i++){
              ans = ans^nums[i];
         }
         return ans;*/
        
        /*M2
        unordered_map<int,int>um;
        for (int i=0;i<nums.size();i++){
             um[nums[i]]++;
        }
        for(auto x:um){
            if (x.second %2!= 0) return x.first;
        }
        return nums[0];*/
        
        //M3
        int ans =0;
        for(int x:nums)ans = x^ans;
        return ans;
    }
};
