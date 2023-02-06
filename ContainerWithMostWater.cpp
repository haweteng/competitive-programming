class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int answer = 0;
        while(i<j)
        {   
            answer = max(answer,min(height[i],height[j])*(j-i));
            if(height[i]<height[j]) i++;
            else j--;
        }
        return answer;
    }
};
