#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
		bool res = true;
		int lastOneIndex = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                if (lastOneIndex >= 0) {
                    if (i - lastOneIndex - 1 < k) {
                        res = false;
                    }
                }

                lastOneIndex = i;
            }
        }

		return res;
    }
};

int main() {
    Solution solution;

	vector<int> nums = { 1,0,0,0,1,0,0,1 };
	int k = 2;
    int ans = solution.kLengthApart(nums, k);

    cout << ans << endl;
    return 0;
}