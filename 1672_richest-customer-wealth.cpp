class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0;

        for (vector<int> acc : accounts) {
            int temp = 0;
            for (int i = 0; i < acc.size(); i++) {
                temp += acc[i];
            }
            if (temp > max)
                max = temp;
        }

        return max;
    }
};