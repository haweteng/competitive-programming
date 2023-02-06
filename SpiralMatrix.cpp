class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int count = row*col;
        int k = 0;
        vector<int> result;
        
        while(count){
            for(int j=k;j<col-k  && count;j++)
                result.push_back(matrix[k][j]),count--;
            for(int i=k+1;i<row-k  && count;i++)
                result.push_back(matrix[i][col-1-k]),count--;
            for(int j=col-2-k;j>=0+k  && count;j--)
                result.push_back(matrix[row-1-k][j]),count--;
                for(int i=row-2-k; i>=0+1+k  && count; i--)
                result.push_back(matrix[i][k]),count--;
            k++;
        }
        
        return result;
    }
};
