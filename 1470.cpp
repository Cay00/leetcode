#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res;

        int index = 0;
        int x = 1;
        for (int i = 0; i < nums.size(); i++) {
			res.push_back(nums[index]);
            index += n;
			if (index >= nums.size()) index = 1 * x++;
        }
		
        return res;
    }
};

int main() {
    Solution solution;

	vector<int> nums = { 2,5,1,3,4,7 };
    int n = 3;

    vector<int> ans = solution.shuffle(nums, n);

    for (int num : ans) {
        cout << num << " ";
    }

    return 0;
}