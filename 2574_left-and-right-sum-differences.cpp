class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);

        int total = 0;
        int leftSum = 0;
        for (int num : nums) {
            total += num;
        }

        for (int i = 0; i < nums.size(); i++) {
            int rightSum = total - leftSum - nums[i];
            ans[i] = abs(leftSum - rightSum);
            leftSum += nums[i];
        }

        return ans;
    }
};