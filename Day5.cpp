class Solution {
public:
    int climbStairs(int n) {
        unordered_map<int,int>um;
        return find_steps(n,um);
    }
    int find_steps(int n,unordered_map<int,int>&um){
        if(n==0)return 1;
        else if(n<0)return 0;
        else {
         if(um.find(n)!=um.end())return um[n];
         else{
             int sum =find_steps(n-1,um)+find_steps(n-2,um);
             um[n]=sum;
             return sum;
         }
        }
        
    }
};
