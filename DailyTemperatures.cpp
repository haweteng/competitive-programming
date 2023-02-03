class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> result(n, 0);
        for(int i = n - 1; i >= 0; i--){
            int curr = temperatures[i];
            int diff = 0;
            for(int j = i + 1; j < n;){
                if(curr < temperatures[j]){
                    diff = j - i;
                    break;
                }
                if(result[j] == 0) 
                break;
                j = j + result[j];   
            }
            result[i] = diff;
        }
        return result;
    }
};
