class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a =0,b=0,c=0;
        for(int x:nums){
            if(x==0)a++;
            else if(x == 1)b++;
            else c++;
        }
        int i=0;
        while(a){nums[i]=0;a--;i++;}
        while(b){nums[i]=1;b--;i++;}
        while(c){nums[i]=2;c--;i++;}
    }
};
