#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int num : nums) {
            if (seen.count(num)) {
                return true;
            }

            seen.insert(num);
        }

        return false;
    }
};

int main() {
    Solution solution;

    vector<int> nums = { 1,1,1,3,3,4,3,2,4,2 };

    bool ans = solution.containsDuplicate(nums);
    cout << ans << endl;

    return 0;
}