class Solution {
public:
    vector<vector<int>> largestLocal(const vector<vector<int>>& grid) {
    int n = grid.size();
    vector<vector<int>> maxLocal(n - 2, vector<int>(n - 2, 0)); // Initialize maxLocal matrix

    for (int i = 1; i < n - 1; ++i) {
        for (int j = 1; j < n - 1; ++j) {
            int maxVal = grid[i - 1][j - 1]; // Initialize maxVal with the top-left element of the submatrix
            for (int k = i - 1; k <= i + 1; ++k) {
                for (int l = j - 1; l <= j + 1; ++l) {
                    maxVal = max(maxVal, grid[k][l]); // Update maxVal by comparing with each element of the submatrix
                }
            }
            maxLocal[i - 1][j - 1] = maxVal; // Assign the maximum value to the corresponding position in maxLocal
        }
    }

    return maxLocal;
}
};
