/*
[1,2,7,8,3,4,5,9,0]
1 -> [1]
2 -> [1,2]
7 -> [1,2,7]
8 -> [1,2,7,8]
3 -> [1,2,3,8]  // we replaced 7 with 3, since for the longest sequence we need only the last number and 1,2,3 is our new shorter sequence
4 -> [1,2,3,4] // we replaced 8 with 4, since the max len is the same but 4 has more chances for longer sequence
5 -> [1,2,3,4,5]
9 -> [1,2,3,4,5,9]
0 -> [0,2,3,4,5,9] // we replaced 1 with 0, so that it can become a new sequence
*/
// So in the end our res contains [0,2,3,4,5,9] which is not a found sequence, but it has the length of the valid answer = 6.


class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
     vector<int>v;
     for(int i=0;i<nums.size();i++){
         auto it = std ::lower_bound(v.begin(),v.end(),nums[i]);
         if(it == v.end())v.push_back(nums[i]);
         else *it = nums[i];
     }
     return v.size();
    }
};
