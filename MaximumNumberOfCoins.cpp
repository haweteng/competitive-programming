class Solution {
public:
    int maxCoins(vector<int>& piles)
    {
        sort(piles.begin(),piles.end());
        int n = piles.size();
        int answer = 0;
        for(int i=n/3;i<n;i=i+2)
        {
            answer = answer + piles[i];
        }
        return answer;
       
    }
};
