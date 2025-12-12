#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int res = 0;
        int sum = 0;

        for (int num : nums) {
            sum += num;
        }
        
        res = sum % k;

        return res;
    }
};

int main() {
    Solution solution;

    vector<int> nums = { 3,9,7 };
    int k = 5;
    int ans = solution.minOperations(nums, k);

    cout << ans << endl;

    return 0;
}