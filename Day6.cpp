//gfg :https://www.geeksforgeeks.org/count-set-bits-in-an-integer/
//M-1
//Using Lookup table: We can count bits in O(1) time using the lookup table.
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v;
        int arr[256]={0};
        arr[0]=0;
        arr[1]=1;
        for (int i=2;i<256;i++){
            arr[i] = (1&i) + arr[i/2]; 
        }
        for(int i=0;i<=n;i++){
            v.push_back(arr[(i&(0xff))]+arr[(i>>8)&(0xff)]+arr[(i>>16)&(0xff)]+arr[(i>>24)&(0xff)]);
        }
        return v;
    }
};
