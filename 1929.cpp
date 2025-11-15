#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> getConcatenation(vector<int>& nums) {

		vector<int> answer(2 * nums.size());
		for (int i = 0; i < nums.size(); i++) {
			answer[i] = nums[i];
			answer[i + nums.size()] = nums[i];
		}

		return answer;
	}
};


int main() {
	Solution solution;
	
	vector<int> nums = { 1, 2, 3 };
	vector<int> answer = solution.getConcatenation(nums);

	for (int num : answer) {
		cout << num << " ";
	}

	return 0;
}