class Solution {
public:
    int hIndex(vector<int>& c) {
        sort(c.rbegin(),c.rend());
        int j;
        for(j=0;j<c.size();j++) {
            if(j+1>c[j])
                break;
        }
        return j;
    }
};
