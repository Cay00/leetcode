class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        if (nums.size() == 1) {
            return nums[0];
        }

        for (int i = 0; i < nums.size(); i += 2) {
            if (i + 1 == nums.size() || nums[i] != nums[i + 1]) {
                return nums[i];
            }
        }

        return 1;
    }
};