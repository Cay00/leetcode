#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == original) {
                original *= 2;
                i = -1;
			}
        }
        
		return original;
    }
};

int main() {
    Solution solution;

    vector<int > nums = { 8,19,4,2,15,3 };
	int original = 2;
    int ans = solution.findFinalValue(nums, original);
    
    cout << ans << endl;

    return 0;
}