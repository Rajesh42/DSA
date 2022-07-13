class Solution {
public:
    int search(vector<int>& nums, int target) {
       int l = 0;
       int r = nums.size()-1;
       while(l<=r){
            int mid = l+ (r-l)/2;
            if(nums[mid]==target)return mid;
            //Two extra condition
            if(target>=nums[0]&&nums[mid]<nums[0]){r = mid -1;}
            else if(target<nums[0]&&nums[mid]>=nums[0]){l = mid +1;}
            //STD  
            else if(nums[mid]<target){l = mid +1;}
            else {r =mid-1;}
    }
        return -1;
    }
};
