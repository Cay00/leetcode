#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            cout << nums[i] << " ";
        }
    }
};

int main() {
    Solution s;
    vector<int> nums = { 0,2,1,5,3,4 };

    vector<int> result = s.buildArray(nums);

    for (int x : result) {
        cout << x << " ";
    }
}