#GFG Solution : https://www.geeksforgeeks.org/unique-triplets-sum-given-value/#:~:text=For%20example%2C%20if%20the%20given,12)%20whose%20sum%20is%2024.

#With Extra Space
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v1;
        unordered_set<string>us;
        string temp = "";
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            int l=i+1;
            int r=n-1;
            int sum = -nums[i];
            while(l<r){
                if(nums[l]+nums[r]==sum){
                temp = to_string(nums[i])+":"+to_string(nums[l]);
                if(us.find(temp)==us.end()){ v1.push_back({nums[i],nums[l],nums[r]});us.insert(temp);}
                l++;r--;
                }
                else if(nums[l]+nums[r]<sum)l++;
                else r--;
            }
        }
        return v1;
    }
};
