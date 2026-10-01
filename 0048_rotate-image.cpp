class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for (int y = 0; y < matrix.size(); y++) {
            for (int x = y + 1; x < matrix.size(); x++) {
                cout << matrix[y][x] << " ";
                swap(matrix[y][x], matrix[x][y]);
            }
        }

        for (int y = 0; y < matrix.size(); y++) {
            reverse(matrix[y].begin(), matrix[y].end());
        }
    }
};