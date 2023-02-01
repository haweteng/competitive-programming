class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int> res;
        int start = 0, end = arr.size() - 1;
        while(start < end){
            int maxIndex = 0;
            int maxValue = 0;
            for(int i = start; i <= end; i++){
                if(arr[i] > maxValue){
                    maxIndex = i;
                    maxValue = arr[i];
                }
            }
            int low = start, high = maxIndex;
            res.push_back(maxIndex + 1);
            while(low < high) swap(arr[low++], arr[high--]);
            low = start, high = end;
            while(low < high) swap(arr[low++], arr[high--]);
            res.push_back(end + 1);
            --end;
        }
        return res;
    }
};
