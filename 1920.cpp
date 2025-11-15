#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> buildArray(vector<int>& nums) {
		vector<int> answer(nums.size());

		for (int i = 0; i < nums.size(); i++) {
			answer[i] = nums[nums[i]];
		}

		return answer;
	}
};


int main() {
	Solution solution;
	
	vector<int> nums = { 0, 2, 1, 5, 3, 4 };

	vector<int> answer = solution.buildArray(nums);

	for (int num : answer) {
		cout << num << " ";
	}

	return 0;
}