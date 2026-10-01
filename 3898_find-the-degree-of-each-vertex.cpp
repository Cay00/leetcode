class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> ans;

        for (int i = 0; i < matrix.size(); i++) {
            ans.push_back(0);
            for (int j = 0; j < matrix.size(); j++) {
                ans[i] += matrix[i][j];
            }
        }

        return ans;
    }
};