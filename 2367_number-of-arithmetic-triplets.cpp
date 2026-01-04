#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int ans = 0;

        unordered_map<int, int> freq;

        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        for (int j = 0; j < nums.size(); j++) {
            if (freq.count(nums[j] + diff) && freq.count(nums[j] + 2 * diff)) {
                ans++;
            }
        }

        return ans;
    }
};

int main() {
    Solution solution;

    return 0;
}