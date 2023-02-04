class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int n = nums.size();
        if (!n)
            return 0;
        int maxw = 1, w = 0;
        deque<int> dqMin, dqMax;
        for (int i = 0; i < n; ++i) {
            while (!dqMax.empty() && nums[dqMax.back()] < nums[i]) {
                dqMax.pop_back();
            }
            while (!dqMin.empty() && nums[dqMin.back()] > nums[i]) {
                dqMin.pop_back();
            }
            dqMax.push_back(i);
            dqMin.push_back(i);
            ++w;
            while (!dqMax.empty() && !dqMin.empty()) {
                int minVal = nums[dqMin.front()];
                int maxVal = nums[dqMax.front()];
                if ((long)maxVal <= (long)minVal + limit) {
                    break;
                }
                --w;
                if (dqMin.front() <= i - w) {
                    dqMin.pop_front();
                }
                if (dqMax.front() <= i - w) {
                    dqMax.pop_front();
                }
            }
            maxw = max(maxw, w);
        }
        return maxw;
    }
};
