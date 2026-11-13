class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> x;
        int max = 0;

        for (vector<int> a : points) {
            x.push_back(a[0]);
        }

        sort(x.begin(), x.end());

        for (int i = 1; i < x.size(); i++) {
            if (x[i] - x[i - 1] > max) {
                max = x[i] - x[i - 1];
            }
        }
        return max;
    }
};