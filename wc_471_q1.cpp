#include <iostream>
#include <vector>

using namespace std; 

class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int res = 0;
        vector<int> freq(101, 0);

        for (int num : nums) {
            freq[num]++;
        }

        for (int i = 0; i < freq.size(); i++) {
            if (freq[i] > 0 && freq[i] % k == 0) {
                res += i * freq[i];
            }
        }

        return res;
    }
};


int main() {
    Solution solution;

    vector<int> nums = { 1,2,2,3,3,3,3,4 };
	int k = 2;
    int ans = solution.sumDivisibleByK(nums, k);

    cout << ans << endl;
    return 0;
}