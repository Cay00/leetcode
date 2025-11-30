#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> getSneakyNumbers(vector<int>& nums) {
		vector<int> res;

		vector<int> freq(101, 0);
		for (int num : nums) {
			freq[num]++;
		}

		for (int i = 0; i < freq.size(); i++)
		{
			if (freq[i] > 1) {
				res.push_back(i);
			}
		}
	
		return res;
	}
};


int main() {
	Solution solution;

	vector<int> nums = { 7,1,5,4,3,4,6,0,9,5,8,2 };
	vector<int> ans = solution.getSneakyNumbers(nums);
	
	for (int num : ans) {
		cout << num << " ";
	}
	return 0;
}