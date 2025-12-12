#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> result(n - 2, vector<int>(n - 2));

        for (int i = 0; i < n - 2; i++) {
            for (int j = 0; j < n - 2; j++) {
                int mx = 0;

                for (int x = i; x < i + 3; x++) {
                    for (int y = j; y < j + 3; y++) {
                        if (grid[x][y] > mx) mx = grid[x][y];
                    }
                }

                result[i][j] = mx;
            }
        }
        return result;
    }
};

int main() {
    Solution solution;

    vector<vector<int>> grid = { {9, 9, 8, 1},{5, 6, 2, 6},{8, 2, 6, 4},{6, 2, 2, 2} };
    
    vector<vector<int>> ans = solution.largestLocal(grid);

    for (const auto& row : ans) {
        for (int x : row) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}