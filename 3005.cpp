#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int maxFrequencyElements(vector<int>& nums) {
		int res = 0;

		vector<int> freq(101, 0);

		for (int num : nums) {
			freq[num]++;
		}
		
		int maxR = 0;
		for (int f : freq) {
			maxR = max(maxR, f);
		}

		for (int f : freq) {
			if (f == maxR) {
				res += maxR;
			}
		}
	
		return res;
	}
};


int main() {
	Solution solution;

	vector<int> nums = { 1,2,2,3,1,4 };
	int ans = solution.maxFrequencyElements(nums);
	cout << ans << endl;

	return 0;
}