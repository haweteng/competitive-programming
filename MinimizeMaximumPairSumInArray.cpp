class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        int i=0;int j=nums.size()-1;
        while(i<j){
            sum=max(nums[i]+nums[j],sum) ;
            i++;
            j--;
                 
        }
        return sum;
    }     
};
