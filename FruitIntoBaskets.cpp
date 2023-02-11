class Solution {
public:
    int totalFruit(vector<int>& tree) {
        vector<int> count(tree.size(), 0);
        int f=0, s=0, ret=0;
        
        int distinctCount = 0;
        while (s < tree.size()) {
            count[tree[s]]++;
            if (count[tree[s]] == 1) {
                distinctCount++;
            }
    
            if (distinctCount > 2) {
                ret = max(ret, s-f);
                while (distinctCount > 2) {
                    count[tree[f]]--;
                    if (count[tree[f]] == 0) {
                        distinctCount--;
                    }
                    f++;
                }
            }
            s++;
        }
        
        return max(ret, s-f);
    }
};
