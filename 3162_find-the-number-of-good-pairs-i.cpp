#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int ans = 0;

        unordered_map<int, int> freq;
        for (int num : nums2) {
            freq[num]++;
        }

        for (int num : nums1) {
            if (num % k != 0)
                continue;

            int target = num / k;
            for (int j = 1; j * j <= target; j++) {
                if (target % j == 0) {
                    ans += freq[j];
                    int second = target / j;
                    if (second != j) {
                        ans += freq[second];
                    }
                }
            }
        }

        return ans;
    }
};

int main() {
    Solution solution;

    return 0;
}