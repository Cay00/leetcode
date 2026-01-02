#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int res = 0;
        int n = nums.size() / 2;

        unordered_map<int, int> elements;

        for (int num : nums) {
            elements[num]++;

            if (elements[num] == n)
                return num;
        }

        return res;
    }
};

int main() {
    Solution solution;

    return 0;
}