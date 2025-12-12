#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int res = 0;
       

        for (int i = 1; i < nums.size(); i++) {
            int l = 0;
            int r = 0;
            for (int j = 0; j < i; j++) { 
                l += nums[j];
            }
            for (int k = i; k < nums.size(); k++) {
                r += nums[k];
            }

            int sum = l - r;
            if (sum < 0) sum *= -1;

            if (sum % 2 == 0) res++;
        }

        return res;
    }
};

int main() {
    Solution solution;

    vector<int> nums = { 10,10,3,7,6 };
    int ans = solution.countPartitions(nums);

    cout << ans << endl;

    return 0;
}