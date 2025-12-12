#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        int m = buildings.size();
        int ans = 0;

        unordered_map<int, vector<int>> same_row;
        unordered_map<int, vector<int>> same_col;

        for (auto& b : buildings) {
            int x = b[0];
            int y = b[1];

            same_row[y].push_back(x); // y in x's
            same_col[x].push_back(y); // x in y's
        }

        for (auto& m : same_row) sort(m.second.begin(), m.second.end());
        for (auto& m : same_col) sort(m.second.begin(), m.second.end());

        for (auto& b : buildings) {
            int x = b[0];
            int y = b[1];

            bool left = same_row[y].front() < x;
            bool right = same_row[y].back() > x;
            bool top = same_col[x].front() < y;
            bool bottom = same_col[x].back() > y;

            if (left && right && top && bottom) ans++;
        }

        return ans;
    }
};

int main() {
    Solution solution;


    return 0;
}