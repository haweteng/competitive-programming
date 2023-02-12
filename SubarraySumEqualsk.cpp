class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    int sum = 0, res = 0;
    unordered_map<int, int> hm;     
    for (int x : nums) {
        ++hm[sum];
        sum += x;
        res += hm[sum-k];
    }   
    return res;
}
};
