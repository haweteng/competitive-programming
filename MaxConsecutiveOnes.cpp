class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int n=nums.size();
    int ans=INT_MIN;
    int j=-1;
    int count=0;
    for(int i=0;i<n;i++){
        
        if(nums[i]==0)
        {
            count++;
        }
        
        while(count>k){
            j++;
            if(nums[j]==0){
                count--;
            }
            
        }
        int len=i-j;
        ans=max(ans,len);
        
    }
    return ans;
    
}
        
    
};
