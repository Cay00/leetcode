#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans = 0;

        for (int i = 0; i < points.size() - 1; i++) {
            int x = points[i][0];
            int y = points[i][1];

            int x_target = points[i + 1][0];
            int y_target = points[i + 1][1];

            ans += max(abs(x_target - x), abs(y_target - y));
        }

        return ans;
    }
};

int main() {
	Solution solution;

	return 0;
}