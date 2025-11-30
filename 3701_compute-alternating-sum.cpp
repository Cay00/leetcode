#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int res = 0;
        for (int i = 0; i < nums.size();i++) {
			if (i % 2 == 0) res += nums[i];
			else res -= nums[i];
        }
		return res;
    }
};

int main() {
    Solution solution;

    vector<int> nums = { 1,3,5,7 };
    int ans = solution.alternatingSum(nums);

    cout << ans << endl;
    return 0;
}