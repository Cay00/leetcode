#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = nums.size(); // pointer
        int i = 0;

        while(i < k) {
            if (nums[i] == val) {
                // swap with the number from the end
                nums[i] = nums[k - 1];
                k--;
            }
            else {
                i++;
            }
        }

        return k;
    }
};

int main() {
    Solution solution;

    vector<int> nums = { 3,2,2,3 };
    int val = 3;

    int ans = solution.removeElement(nums, val);
    cout << ans << endl;

    return 0;
}