class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int nNums = nums.size();
        if (nNums == 0) {
            return -1;
        }
        if (nNums == 1) {
            return 0;
        }
        
        int sum = 0;
        for (int i=0; i<nNums; i++) {
            sum += nums[i];
        }
        
        int sumL = 0;
        int sumR = sum;
        for (int i=0; i<nNums; i++) {
            sumR -= nums[i];
            if (sumR == sumL) {
                return i;
            }
            sumL += nums[i];
        }
        
        return -1;
    }
};
