#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int res = 0;

        for (int h : hours) {
            if (h >= target) res++;
        }

        return res;
    }
};

int main() {
    Solution solution;

    vector<int> hours = { 0,1,2,3,4 };
    int target = 2;

    int ans = solution.numberOfEmployeesWhoMetTarget(hours, target);

    cout << ans << endl;

    return 0;
}