class NumMatrix {
    vector<vector<int> > localSum;
public:
    NumMatrix(vector<vector<int>> &matrix) {
        if (matrix.size() == 0) return;
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int> > _localSum(m + 1, vector<int>(n + 1, 0));
        
        int sum = 0;
        for (int i = 1; i <= m; i++) {
            sum = 0;
            for (int j = 1; j <= n; j++) {
                sum += matrix[i-1][j-1];
                _localSum[i][j] = _localSum[i-1][j] + sum;
            }
        }
        
        localSum = _localSum;
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        return localSum[row2+1][col2+1] + localSum[row1][col1] - localSum[row1][col2+1] - localSum[row2+1][col1];
    }
};
