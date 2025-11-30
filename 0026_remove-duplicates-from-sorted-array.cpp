#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int k = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[k - 1]) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};

int main() {
    Solution solution;

    vector<int> nums = { 0,0,1,1,1,2,2,3,3,4 };

    int ans = solution.removeDuplicates(nums);
    cout << ans << endl;

    return 0;
}