class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> answer;
        for (int index=0; index<l.size(); index++){
            vector<int> demo;
            bool flag=1;
            for (int i=l[index]; i<=r[index]; i++){
                demo.push_back(nums[i]);
            }
            sort(demo.begin(),demo.end());
            for (int i=2; i<demo.size(); i++){
                if (demo[i]-demo[i-1] != demo[1]-demo[0]){
                    flag=0; break;
                }
            }
            if (flag)answer.push_back(true);
            else answer.push_back(false);
        }
        return answer;
    }
};
