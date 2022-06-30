//M-1
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        int mid = start + (end-start)/2;
        if(target>nums[end])return end+1;
        else if(target==nums[end])return end;
        else if (target<=nums[0])return 0;
        while(start<end){
            mid = start + (end-start)/2;
            if((nums[mid]<target&&nums[mid+1]>target))return mid+1;
            if(nums[mid]==target)return mid;
            else if (nums[mid]>target)end = mid;
            else start = mid;
        }
        return mid;
    }
};

//M-2
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n-1, mid;
        
        while(left<=right){
            mid = left + (right-left)/2;
            
            if(nums[mid] == target) return mid;
            else if (nums[mid] < target) left = mid+1;
            else right = mid-1;
        }
        
        return left;
    }
};
