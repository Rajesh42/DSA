#Practice Again
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        map<pair<int,int>,int>mp;
        return Noofways(nums,mp,target,0,0);
    }
    int Noofways(vector<int>& nums ,map<pair<int,int>,int>&mp ,int target ,int index , int value){
        if(index>=nums.size()){
            if(value == target)return 1;
            else return 0;
        }
        if(mp.find({index,value})!=mp.end())return mp[{index,value}];
        int pos = Noofways(nums,mp,target,index+1,value-nums[index]);
        int neg = Noofways(nums,mp,target,index+1,value+nums[index]);
        return mp[{index,value}] = pos +neg ;
    }
    
};
