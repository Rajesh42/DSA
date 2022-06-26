class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //M-1 with extra space
        /*unordered_map<int,int>um;
        for (int i=0;i<numbers.size();i++){
            if (um.find(target - numbers[i])!=um.end()&&i!=um[target - numbers[i]])return {um[target - numbers[i]] +1,i+1};
            else um[numbers[i]]=i;
        }
        return {-1,-1};*/
        
        //M-2 without extra space
        int l=0,r=numbers.size()-1;
        while(l<r){
            int sum = numbers[l] + numbers [r];
            if(target == sum)return {l+1,r+1};
            else if (target > sum)l++;
            else r--;
        }
        return {}; //No Solution
        
    }
};
