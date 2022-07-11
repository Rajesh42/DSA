class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        int f=-1,s=-1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(nums[mid] >= target){
                r = mid-1;
                if(nums[mid]==target)f = mid;
            }
            else {
                l = mid+1;
            }
            
        }
        l = 0; r = nums.size()-1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(nums[mid] <= target){
                l = mid+1;
                if(nums[mid]==target)s = mid;
            }
            else {
                r = mid-1;
            }
            
        }
        return {f,s};
    }
};
