#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int numIdenticalPairs(vector<int>& nums) {
		int ans = 0;
		for (int i = 0; i < nums.size(); i++) {
			for (int j = i + 1; j < nums.size(); j++) {
				if (nums[i] == nums[j]) {
					ans++;
				}
			}
		}
		return ans;
	}
};


int main() {
	Solution solution;

	vector<int> nums = {1, 2, 3, 1, 1, 3};

	int ans = solution.numIdenticalPairs(nums);

	cout << ans << endl;

	return 0;
}