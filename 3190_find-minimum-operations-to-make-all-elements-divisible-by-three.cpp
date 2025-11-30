#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int minimumOperations(vector<int>& nums) {
		int res = 0;
		for (int num : nums) {
			if (((num + 1) % 3 == 0) || ((num - 1) % 3 == 0)) {
				res++;
			}
		}
		return res;
	}
};


int main() {
	Solution solution;

	vector<int> nums = { 1,2,3,4 };
	int ans = solution.minimumOperations(nums);
	
	cout << ans << endl;

	return 0;
}