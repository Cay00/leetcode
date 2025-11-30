#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                ans = i;
                break;
            }
            else if (nums[i] > target) {
                ans =  i;
                break;
            }
        }

        return ans;
    }
};

int main() {
    Solution solution;

    vector<int> nums = { 1,3,5,6 };
    int target = 5;

    int ans = solution.searchInsert(nums, target);
    cout << ans << endl;

    return 0;
}