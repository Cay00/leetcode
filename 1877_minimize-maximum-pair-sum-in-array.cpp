#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int ans = 0;

        sort(nums.begin(), nums.end());

        int x = 1;
        for (int i = 0; i < nums.size() / 2; i++) {
            int last = nums.size() - x;
            x++;

            if (nums[i] + nums[last] > ans)
                ans = nums[i] + nums[last];
        }

        return ans;
    }
};

int main() {
	//Solution solution;

	return 0;
}