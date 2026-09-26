class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans;

        for (int i = 0; i <= rowIndex; i++) {
            vector<int> tempArr;
            for (int j = 0; j <= i; j++) {
                if (j == 0 || j == i){
                    tempArr.push_back(1);
                }
                else {
                    if (i > 0) {
                        int x = ans[i - 1][j] + ans[i - 1][j - 1];
                        tempArr.push_back(x);
                    }
                }
            }
            ans.push_back(tempArr);
        }
    
        return ans[rowIndex];
    }
};